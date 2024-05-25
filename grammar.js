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
      choice($.declaration, $.string, $.semicolon_grouping, $.symbol_ref),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    doc_comment_block: (_) => token(repeat1(seq(/##/, /[^\r\n]*\n/))),
    line_comment: (_) => token(seq(/#/, /[^\r\n]*/)),

    declaration: ($) =>
      choice($.decl_let, $.decl_struct, $.decl_enum, $.decl_fn, $.decl_using),
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
    decl_struct: ($) => seq("struct", $.identifier),
    decl_enum: ($) => seq("enum", $.identifier),
    decl_fn: ($) =>
      seq(
        "fn",
        field("name", $.identifier),
        optional(seq("=>", field("body", $.expression))),
      ),
    decl_using: ($) => seq("using", $.identifier),

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

    string: ($) => seq(/"/, /[^"]*/, /"/),
    identifier: ($) => /[a-zA-Z_][a-zA-Z_0-9]*/,

    type: ($) => choice("bool", "i32", "u32", "u8"),
    bool: ($) => choice("true", "false"),
  },
});
