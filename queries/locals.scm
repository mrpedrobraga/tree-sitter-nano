; Scopes
(source_file) @local.scope
(decl_fn) @local.scope

; Declarations
(decl_fn name: ((identifier)  @local.definition.function) (#set! "definition.var.scope" "parent"))
(decl_let assignee: ((identifier) @local.definition.var) (#set! "definition.var.scope" "parent"))
(decl_fn_parameter_entry name: (identifier) @local.definition.parameter)

(expression_list_semicolon) @local.scope

; References
(identifier) @local.reference
