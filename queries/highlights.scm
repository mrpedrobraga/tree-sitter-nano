; Symbol declaration
"let" @keyword
"struct" @keyword
"enum" @keyword
"fn" @keyword
"using" @keyword

(decl_fn name: (identifier) @function)

(identifier) @variable

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
