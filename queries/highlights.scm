; Symbol declaration
[
    "let"
    "struct"
    "fn"
    "enum"
    "abstract"
    "using"
    "pub"
] @keyword

(decl_fn name: (identifier) @function.method)

(identifier) @variable

; Control flow
[
    "if"
    "unless"
    "elif"
    "elunless"
    "else"
    "for"
    "while"
    "loop"
    "scope"
    "return"
    "yield"
    "continue"
    "restart"
    "break"
] @keyword.control

; Literals
(string) @string

; Comments
(doc_comment_block) @comment
(line_comment) @comment

; Built-in constants
"true" @constant.builtin
"false" @constant.builtin
"bool" @type
"i32"  @type
"u32"  @type
"u8"   @type

; Errors
(ERROR) @error
