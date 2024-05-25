; Scopes
(source_file) @local.scope
(decl_fn) @local.scope

; Declarations
(decl_fn name: (identifier) @definition.function)
(decl_let name: (identifier) @definition.var)

; References
(identifier) @local.reference
