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

    expressions: ($) => $.expression_list_semicolon,
    expression: ($) =>
      choice(
        $.declaration,
        $.string,
        $.semicolon_grouping,
        $.symbol_ref,
        $._control_flow,
      ),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    doc_comment_block: (_) => token(repeat1(seq(/##/, /[^\r\n]*\n/))),
    line_comment: (_) => token(seq(/#/, /[^\r\n]*/)),

    declaration: ($) =>
      seq(
        optional("pub"),
        choice($.decl_let, $.decl_struct, $.decl_enum, $.decl_fn, $.decl_using),
      ),
    decl_let: ($) =>
      prec.right(
        0,
        seq(
          "let",
          field("name", $.identifier),
          optional(seq(":", field("type", $.expression))),
          optional(seq("=", field("initializer", $.expression))),
        ),
      ),
    decl_struct: ($) =>
      seq("struct", $.identifier, optional($.decl_struct_body)),
    decl_enum: ($) => seq("enum", $.identifier, optional($.decl_enum_body)),
    decl_abstract: ($) =>
      seq("abstract", $.identifier, optional($.decl_abstract_body)),
    decl_fn: ($) =>
      seq(
        "fn",
        field("name", $.identifier),
        optional(seq("=>", field("body", $.expression))),
      ),
    decl_using: ($) => seq("using", field("import", $.identifier)),

    impl: ($) =>
      seq(
        "impl",
        optional(seq(field("abstract", $.symbol_ref), "for")),
        field("impl_subject", $.symbol_ref),
      ),

    symbol_ref: ($) => choice($.identifier),

    semicolon_grouping: ($) => seq("(", $.expression_list_semicolon, ")"),
    expression_list_comma: ($) =>
      seq(
        $.expression,
        optional(seq(repeat(seq(",", $.expression)), optional(","))),
      ),
    expression_list_semicolon: ($) =>
      seq(
        $.expression,
        optional(seq(repeat(seq(";", $.expression)), optional(";"))),
      ),

    decl_struct_body: ($) =>
      choice(seq("{", "}"), seq("[", $.expression_list_comma, "]")),
    decl_enum_body: ($) => seq("{", "}"),
    decl_abstract_body: ($) => seq("{", "}"),

    _control_flow: ($) => choice($.return, $.yield, $.restart, $.continue),

    if: ($) =>
      seq(
        choice("if", "unless"),
        field("condition", $.expression),
        "then",
        field("consequence", $.expression),
        repeat($.elif),
        optional($.else),
      ),

    elif: ($) =>
      seq(
        choice("elif", "elunless"),
        field("condition", $.expression),
        "then",
        field("consequence", $.expression),
      ),

    else: ($) => seq("else", field("consequence", $.expression)),

    for: ($) =>
      seq(
        "for",
        optional(seq(field("iteration_item_name", $.identifier), "in")),
        field("iterator", $.expression),
        "do",
        field("body", $.expression),
      ),

    while: ($) =>
      seq(
        choice("while", "until"),
        field("condition", $.expression),
        "do",
        field("body", $.expression),
      ),

    scope: ($) => seq("scope", $.expression),
    loop: ($) => seq("loop", $.expression),

    return: ($) => seq("return", field("value", optional($.expression))),
    yield: ($) => seq("yield", field("value", optional($.expression))),
    restart: ($) => seq("restart"),
    continue: ($) => seq("continue", field("value", optional($.expression))),
    break: ($) => seq("break", field("value", optional($.expression))),

    string: ($) => seq(/"/, /[^"]*/, /"/),
    identifier: ($) => /[a-zA-Z_][a-zA-Z_0-9]*/,

    type: ($) => choice("bool", "i32", "u32", "u8"),
    bool: ($) => choice("true", "false"),
  },
});
