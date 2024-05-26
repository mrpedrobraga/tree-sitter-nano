module.exports = grammar({
  name: "nano",
  word: ($) => $.identifier,
  extras: ($) => [
    $.doc_comment_block,
    $.line_comment,
    " ",
    "\r",
    "\n",
    "\t",
    "\f",
  ],
  rules: {
    source_file: ($) => $.expressions,

    expressions: ($) => $._expression_list_semicolon,
    expression: ($) =>
      choice(
        $.directive,
        $.declaration,
        $.literal,
        $.semicolon_grouping,
        $.symbol_ref,
        $.impl_type,
        $.dyn_type,
        $.static_type,
        $.symbol_call,
        $._control_flow,
      ),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    doc_comment_block: (_) => token(repeat1(seq(/##/, /[^\r\n]*\n/))),
    line_comment: (_) => token(seq(/#/, /[^\r\n]*/)),

    directive: ($) => choice($.expression_directive, $.attribute_directive),
    expression_directive: ($) =>
      prec.right(
        7,
        seq(
          token.immediate("@"),
          field("directive", $.identifier),
          seq(
            "(",
            field("parameters", optional($.symbol_call_site_parameter_list)),
            ")",
          ),
        ),
      ),
    attribute_directive: ($) =>
      prec.right(8, seq($.attribute, field("subject", $.expression))),
    attribute: ($) =>
      seq(
        "@[",
        field("attributes", optional($.symbol_call_site_parameter_list)),
        "]",
      ),

    declaration: ($) =>
      seq(
        optional("pub"),
        choice(
          $.decl_let,
          $.decl_alias,
          $.decl_struct,
          $.decl_enum,
          $.decl_fn,
          $.decl_using,
        ),
      ),
    decl_let: ($) =>
      prec.right(
        0,
        seq(
          "let",
          field("assignee", $._decl_let_destructuring_pattern),
          optional(seq(":", field("type", $.expression))),
          optional(seq("=", field("initializer", $.expression))),
        ),
      ),
    decl_alias: ($) =>
      prec.right(
        0,
        seq(
          "alias",
          field("alias", $.identifier),
          "=",
          field("aliased_expression", $.expression),
        ),
      ),
    _decl_let_destructuring_pattern: ($) => choice($.identifier),

    decl_fn: ($) =>
      prec.right(
        0,
        seq(
          "fn",
          field("name", $.identifier),
          optional(seq("(", optional($.decl_fn_parameter_list), ")")),
          optional(seq("->", field("return_type", $.decl_fn_return_type))),
          optional(seq("=>", field("body", $.expression))),
        ),
      ),
    decl_fn_parameter_list: ($) =>
      seq(
        $.decl_fn_parameter_entry,
        repeat(seq(",", $.decl_fn_parameter_entry)),
      ),
    decl_fn_parameter_entry: ($) =>
      choice(
        seq(field("name", $.identifier)),
        seq(field("name", $.identifier), ":", field("type", $.expression)),
        seq("scope", field("binding", $.expression)),
      ),
    decl_fn_return_type: ($) => $.expression,
    decl_using: ($) => seq("using", field("import", $.identifier)),

    decl_struct: ($) =>
      seq(
        "struct",
        field("name", $.identifier),
        optional(field("body", $._decl_struct_body)),
      ),
    decl_enum: ($) =>
      seq(
        "enum",
        field("name", $.identifier),
        optional(field("body", $._decl_enum_body)),
      ),
    decl_abstract: ($) =>
      seq(
        "abstract",
        field("name", $.identifier),
        optional($._decl_abstract_body),
      ),
    _decl_struct_body: ($) =>
      choice($.decl_struct_body_curly, $.decl_struct_body_square),
    decl_struct_body_curly: ($) =>
      seq("{", $._decl_struct_body_entry_list, "}"),
    decl_struct_body_square: ($) => seq("[", $._expression_list_comma, "]"),
    _decl_struct_body_entry_list: ($) =>
      seq(
        $.decl_struct_field,
        repeat(seq(",", $.decl_struct_field)),
        optional(","),
      ),
    _decl_linear_struct_body_entry_list: ($) =>
      seq(
        $.decl_linear_struct_field,
        repeat(seq(",", $.decl_linear_struct_field)),
        optional(","),
      ),
    decl_struct_field: ($) =>
      seq(
        optional($.attribute),
        optional("pub"),
        field("name", $.identifier),
        ":",
        field("type", $.expression),
      ),
    decl_linear_struct_field: ($) => field("type", $.expression),
    _decl_enum_body: ($) => seq("{", $._decl_enum_body_entry_list, "}"),
    _decl_enum_body_entry_list: ($) =>
      seq(
        $.decl_enum_variant,
        repeat(seq(",", $.decl_enum_variant)),
        optional(","),
      ),
    decl_enum_variant: ($) =>
      seq(
        field("name", $.identifier),
        field("body", optional($._decl_struct_body)),
      ),
    _decl_abstract_body: ($) => seq("{", "}"),

    impl: ($) =>
      seq(
        "impl",
        optional(seq(field("abstract", $.symbol_ref), "for")),
        field("impl_subject", $.symbol_ref),
      ),

    placeholder: ($) => seq("_"),
    symbol_ref: ($) => choice($.placeholder, $.identifier),
    impl_type: ($) => seq("impl", $.expression),
    dyn_type: ($) => seq("dyn", $.expression),
    static_type: ($) => seq("static", $.expression),

    semicolon_grouping: ($) => seq("(", $._expression_list_semicolon, ")"),
    _expression_list_comma: ($) =>
      seq($.expression, repeat(seq(",", $.expression)), optional(",")),
    _expression_list_semicolon: ($) =>
      seq($.expression, repeat(seq(";", $.expression)), optional(";")),

    symbol_call: ($) =>
      prec.right(
        7,
        seq(
          field("callee", $.expression),
          choice(
            seq(
              "(",
              field("parameters", optional($.symbol_call_site_parameter_list)),
              ")",
            ),
            field("parameter", seq($.expression)),
          ),
        ),
      ),
    symbol_call_site_parameter_list: ($) =>
      seq(
        $.symbol_call_site_parameter_entry,
        repeat(seq(",", $.symbol_call_site_parameter_entry)),
      ),
    symbol_call_site_parameter_entry: ($) =>
      prec.right(
        1,
        choice(
          seq(
            optional(seq(field("parameter_name", $.identifier), ":")),
            field("parameter_value", $.expression),
          ),
          seq("...", field("parameter_spread", $.expression)),
        ),
      ),

    _control_flow: ($) =>
      choice(
        $.if,
        $.for,
        $.while,
        $.scope,
        $.loop,
        $.return,
        $.yield,
        $.restart,
        $.continue,
        $.pipe,
        $.curry_into_right,
        $.curry_into_left,
        $.monadic_bind,
        $.arithmetic_operation,
        $.logical_operation,
        $.bitwise_operation,
      ),

    pipe: ($) =>
      prec.left(
        1,
        seq(
          field("subject", $.expression),
          "|>",
          field("predicate", $.expression),
        ),
      ),
    curry_into_right: ($) =>
      prec.right(
        1,
        seq(
          field("subject", $.expression),
          "||>",
          field("predicate", $.expression),
        ),
      ),
    curry_into_left: ($) =>
      prec.left(
        1,
        seq(
          field("predicate", $.expression),
          "<||",
          field("subject", $.expression),
        ),
      ),
    monadic_bind: ($) => prec.left(10, seq($.expression, "!")),

    arithmetic_operation: ($) =>
      choice(
        $.addition,
        $.negation,
        $.subtraction,
        $.product,
        $.floor_division,
        $.division,
        $.exponentiation,
      ),
    negation: ($) => prec.left(1, seq($.expression, "-", $.expression)),
    addition: ($) => prec.left(2, seq($.expression, "+", $.expression)),
    subtraction: ($) => prec.left(2, seq($.expression, "-", $.expression)),
    product: ($) => prec.left(3, seq($.expression, "*", $.expression)),
    floor_division: ($) => prec.left(3, seq($.expression, "//", $.expression)),
    division: ($) => prec.left(3, seq($.expression, "/", $.expression)),
    exponentiation: ($) => prec.left(4, seq($.expression, "**", $.expression)),

    logical_operation: ($) => choice($.not, $.and, $.or),
    not: ($) => seq("not", $.expression),
    and: ($) =>
      prec.left(1, seq($.expression, choice("and", "but"), $.expression)),
    or: ($) => prec.left(2, seq($.expression, "or", $.expression)),
    xor: ($) => prec.left(2, seq($.expression, "xor", $.expression)),
    bitwise_operation: ($) => choice($.shift_bits_left, $.shift_bits_right),
    shift_bits_left: ($) => prec.left(5, seq($.expression, "<<", $.expression)),
    shift_bits_right: ($) =>
      prec.left(5, seq($.expression, ">>", $.expression)),

    if: ($) =>
      prec.right(
        0,
        seq(
          choice("if", "unless"),
          field("condition", $.expression),
          "then",
          field("consequence", $.expression),
          repeat($.elif),
          optional($.else),
        ),
      ),

    elif: ($) =>
      prec.right(
        0,
        seq(
          choice("elif", "elunless"),
          field("condition", $.expression),
          "then",
          field("consequence", $.expression),
        ),
      ),

    else: ($) => seq("else", field("consequence", $.expression)),

    for: ($) =>
      prec.right(
        0,
        seq(
          "for",
          optional(seq(field("iteration_item_name", $.identifier), "in")),
          field("iterator", $.expression),
          "do",
          field("body", $.expression),
        ),
      ),

    while: ($) =>
      prec.right(
        0,
        seq(
          choice("while", "until"),
          field("condition", $.expression),
          "do",
          field("body", $.expression),
        ),
      ),

    scope: ($) => seq("scope", $.expression),
    loop: ($) => seq("loop", $.expression),

    return: ($) =>
      prec.right(0, seq("return", field("value", optional($.expression)))),
    yield: ($) =>
      prec.right(0, seq("yield", field("value", optional($.expression)))),
    restart: ($) => seq("restart"),
    continue: ($) =>
      prec.right(0, seq("continue", field("value", optional($.expression)))),
    break: ($) =>
      prec.right(0, seq("break", field("value", optional($.expression)))),

    literal: ($) => choice($.fn, $.string, $.number, $.bool),

    fn: ($) =>
      prec.right(
        0,
        seq(
          "fn",
          optional(seq("(", optional($.decl_fn_parameter_list), ")")),
          optional(seq("=>", field("body", $.expression))),
        ),
      ),
    string: ($) => seq(/"/, /[^"]*/, /"/),
    number: ($) =>
      choice(
        seq(
          choice(
            seq("0x", field("hex_digits", /[0-9A-Fa-f_]+/)),
            seq("0b", field("binary_digits", /[0-1_]+/)),
            field("decimal_digits", /[0-9_]+/),
          ),
          optional(field("suffix", $.int_suffix)),
        ),
      ),
    identifier: ($) => /[a-zA-Z_][a-zA-Z_0-9]*/,

    type: ($) =>
      choice(
        "bool",
        "text",
        "slot",
        "view",
        "span",
        "list",
        $.int_suffix,
        $.float_suffix,
      ),
    float_suffix: ($) => choice("f32", "f64"),
    int_suffix: ($) =>
      choice(
        "u8",
        "u16",
        "u32",
        "u64",
        "u128",
        "i8",
        "i16",
        "i32",
        "i64",
        "i128",
        "usize",
        "isize",
        "nat8",
        "nat16",
        "nat32",
        "nat64",
        "nat128",
      ),
    bool: ($) => choice("true", "false"),
  },
});
