; Symbol declaration
[
    "let"
    "alias"
    "struct"
    "fn"
    "enum"
    "abstract"
    "using"
    "pub"
] @keyword

(decl_fn name: (identifier) @function.method)

(identifier) @variable

; Function Call
(symbol_call callee: (expression
    (symbol_ref (identifier) @function.method )
))

; Compiler directives
(expression_directive callee: (identifier @macro)))

; Control flow
[
    "if"
    "unless"
    "then"
    "elif"
    "elunless"
    "else"
    "for"
    "do"
    "while"
    "loop"
    "scope"
    "return"
    "yield"
    "continue"
    "restart"
    "break"
] @keyword.control

; Operations

[
    ","
    ";"
    ":"
    "("
    ")"
    "{"
    "}"
    "["
    "]"
    "=>"
    "->"
    "!"
    "@"
] @operator

[
    "and"
    "but"
    "not"
    "or"
    "xor"
] @keyword

; Literals
(string) @string
(number) @number

; Comments
(doc_comment_block) @comment
(line_comment) @comment

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
] @type
; Errors
(ERROR) @error
