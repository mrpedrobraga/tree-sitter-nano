; Scopes
(source_file) @local.scope
(decl_fn) @local.scope

; Declarations
(decl_fn name: (identifier)  @local.definition)
(decl_let name: (identifier) @local.definition)

; References
(identifier) @local.reference
