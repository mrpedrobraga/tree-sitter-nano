module.exports = grammar({
  name: "nano",
  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => $.expressions,

    expressions: ($) => repeat1($.expression),
    expression: ($) => choice($.declaration),

    declaration: ($) => choice($.decl_let),
    decl_let: ($) => seq("let", "identifier", optional(seq(":", $.expression))),

    type: ($) => choice("bool", "i32", "u32", "u8"),
    identifier: ($) => /[a-zA-Z_][a-zA-Z_0-9]/,
    bool: ($) => choice("true", "false"),
  },
});
