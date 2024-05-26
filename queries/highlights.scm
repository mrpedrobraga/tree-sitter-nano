; Symbol declaration
[
    "let"
    "alias"
    "struct"
    "enum"
    "abstract"
] @keyword

["using"] @keyword.import

["fn"] @keyword.function

[
    "pub"
    "dyn"
    "static"
] @keyword.modifier

(decl_fn name: (identifier) @function)
(decl_fn_parameter_entry name: (identifier) @variable.parameter)

(identifier) @variable

; Function Call
(symbol_call callee: (expression
    (symbol_ref (identifier) @function.call )
))

; Compiler directives
(expression_directive directive: (identifier) @function.macro)
(attribute_directive) @function.macro

; Control flow
[
    "scope"
] @keyword.control

[
    "for"
    "in"
    "do"
    "while"
    "loop"
] @keyword.repeat

[
    "if"
    "unless"
    "then"
    "elif"
    "elunless"
    "else"
] @keyword.conditional

[
    "return"
    "yield"
    "continue"
    "restart"
    "break"
]@keyword.return

; Operations

[
    "("
    ")"
    "{"
    "}"
    "@["
    "["
    "]"
] @punctuation.bracket

[
    "|>"
    "||>"
    "<||"
] @punctuation

[
    ","
    ";"
    ":"
    "=>"
    "->"
    "!"
    "@"
] @operator

["_"] @variable.parameter.builtin

[
    "and"
    "but"
    "not"
    "or"
    "xor"
] @keyword.operator

; Literals
(string) @string @spell
(number) @number

; Comments
(doc_comment_block) @comment.documentation @spell
(line_comment) @comment @spell

; Built-in constants
"true" @constant.builtin
"false" @constant.builtin
"0x" @type
"0b" @type
[
    "u8"
    "u16"
    "u32"
    "u64"
    "u128"
    "i8"
    "i16"
    "i32"
    "u64"
    "u128"
    "f32"
    "f64"
    "nat8"
    "nat16"
    "nat32"
    "nat64"
    "nat128"
    "text"
    "view"
    "slot"
    "span"
    "list"
] @type.builtin
; Errors
(ERROR) @error
