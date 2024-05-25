#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_doc_comment_block = 2,
  sym_line_comment = 3,
  anon_sym_let = 4,
  anon_sym_COLON = 5,
  anon_sym_EQ = 6,
  anon_sym_struct = 7,
  anon_sym_enum = 8,
  anon_sym_fn = 9,
  anon_sym_EQ_GT = 10,
  anon_sym_using = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_COMMA = 14,
  anon_sym_SEMI = 15,
  aux_sym_string_token1 = 16,
  aux_sym_string_token2 = 17,
  anon_sym_bool = 18,
  anon_sym_i32 = 19,
  anon_sym_u32 = 20,
  anon_sym_u8 = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  sym_source_file = 24,
  sym_expressions = 25,
  sym_expression = 26,
  sym_declaration = 27,
  sym_decl_let = 28,
  sym_decl_struct = 29,
  sym_decl_enum = 30,
  sym_decl_fn = 31,
  sym_decl_using = 32,
  sym_symbol_ref = 33,
  sym_semicolon_grouping = 34,
  sym_expression_list_semicolon = 35,
  sym_string = 36,
  aux_sym_expression_list_semicolon_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_doc_comment_block] = "doc_comment_block",
  [sym_line_comment] = "line_comment",
  [anon_sym_let] = "let",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_struct] = "struct",
  [anon_sym_enum] = "enum",
  [anon_sym_fn] = "fn",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_using] = "using",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_bool] = "bool",
  [anon_sym_i32] = "i32",
  [anon_sym_u32] = "u32",
  [anon_sym_u8] = "u8",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym_expressions] = "expressions",
  [sym_expression] = "expression",
  [sym_declaration] = "declaration",
  [sym_decl_let] = "decl_let",
  [sym_decl_struct] = "decl_struct",
  [sym_decl_enum] = "decl_enum",
  [sym_decl_fn] = "decl_fn",
  [sym_decl_using] = "decl_using",
  [sym_symbol_ref] = "symbol_ref",
  [sym_semicolon_grouping] = "semicolon_grouping",
  [sym_expression_list_semicolon] = "expression_list_semicolon",
  [sym_string] = "string",
  [aux_sym_expression_list_semicolon_repeat1] = "expression_list_semicolon_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_doc_comment_block] = sym_doc_comment_block,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym_expressions] = sym_expressions,
  [sym_expression] = sym_expression,
  [sym_declaration] = sym_declaration,
  [sym_decl_let] = sym_decl_let,
  [sym_decl_struct] = sym_decl_struct,
  [sym_decl_enum] = sym_decl_enum,
  [sym_decl_fn] = sym_decl_fn,
  [sym_decl_using] = sym_decl_using,
  [sym_symbol_ref] = sym_symbol_ref,
  [sym_semicolon_grouping] = sym_semicolon_grouping,
  [sym_expression_list_semicolon] = sym_expression_list_semicolon,
  [sym_string] = sym_string,
  [aux_sym_expression_list_semicolon_repeat1] = aux_sym_expression_list_semicolon_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_comment_block] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_expressions] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_let] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_using] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon_grouping] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_expression_list_semicolon_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_initializer = 2,
  field_name = 3,
  field_type = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_initializer] = "initializer",
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_type, 3},
  [3] =
    {field_initializer, 3},
    {field_name, 1},
  [5] =
    {field_body, 3},
    {field_name, 1},
  [7] =
    {field_initializer, 5},
    {field_name, 1},
    {field_type, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 3,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 9,
  [14] = 8,
  [15] = 12,
  [16] = 11,
  [17] = 10,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 28,
  [36] = 27,
  [37] = 33,
  [38] = 24,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 22,
  [45] = 25,
  [46] = 40,
  [47] = 42,
  [48] = 31,
  [49] = 29,
  [50] = 30,
  [51] = 39,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 57,
  [65] = 65,
  [66] = 54,
  [67] = 61,
  [68] = 56,
  [69] = 60,
  [70] = 59,
  [71] = 65,
  [72] = 62,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      ADVANCE_MAP(
        '"', 19,
        '#', 10,
        '(', 15,
        ')', 16,
        ',', 17,
        ':', 12,
        ';', 18,
        '=', 13,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(1);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_doc_comment_block);
      if (lookahead == '#') ADVANCE(2);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_doc_comment_block);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(23);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(23);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(23);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'b', 1,
        'e', 2,
        'f', 3,
        'i', 4,
        'l', 5,
        's', 6,
        't', 7,
        'u', 8,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '3') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '8') ADVANCE(18);
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(27);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 21},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym_expressions] = STATE(55),
    [sym_expression] = STATE(46),
    [sym_declaration] = STATE(43),
    [sym_decl_let] = STATE(47),
    [sym_decl_struct] = STATE(47),
    [sym_decl_enum] = STATE(47),
    [sym_decl_fn] = STATE(47),
    [sym_decl_using] = STATE(47),
    [sym_symbol_ref] = STATE(43),
    [sym_semicolon_grouping] = STATE(43),
    [sym_expression_list_semicolon] = STATE(63),
    [sym_string] = STATE(43),
    [sym_identifier] = ACTIONS(7),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_using] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_string_token1] = ACTIONS(21),
  },
  [2] = {
    [sym_expression] = STATE(52),
    [sym_declaration] = STATE(41),
    [sym_decl_let] = STATE(42),
    [sym_decl_struct] = STATE(42),
    [sym_decl_enum] = STATE(42),
    [sym_decl_fn] = STATE(42),
    [sym_decl_using] = STATE(42),
    [sym_symbol_ref] = STATE(41),
    [sym_semicolon_grouping] = STATE(41),
    [sym_string] = STATE(41),
    [sym_identifier] = ACTIONS(23),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(25),
    [anon_sym_struct] = ACTIONS(27),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_using] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(37),
    [aux_sym_string_token1] = ACTIONS(39),
  },
  [3] = {
    [sym_expression] = STATE(52),
    [sym_declaration] = STATE(41),
    [sym_decl_let] = STATE(42),
    [sym_decl_struct] = STATE(42),
    [sym_decl_enum] = STATE(42),
    [sym_decl_fn] = STATE(42),
    [sym_decl_using] = STATE(42),
    [sym_symbol_ref] = STATE(41),
    [sym_semicolon_grouping] = STATE(41),
    [sym_string] = STATE(41),
    [sym_identifier] = ACTIONS(23),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(25),
    [anon_sym_struct] = ACTIONS(27),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_using] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(41),
    [aux_sym_string_token1] = ACTIONS(39),
  },
  [4] = {
    [sym_expression] = STATE(40),
    [sym_declaration] = STATE(41),
    [sym_decl_let] = STATE(42),
    [sym_decl_struct] = STATE(42),
    [sym_decl_enum] = STATE(42),
    [sym_decl_fn] = STATE(42),
    [sym_decl_using] = STATE(42),
    [sym_symbol_ref] = STATE(41),
    [sym_semicolon_grouping] = STATE(41),
    [sym_expression_list_semicolon] = STATE(60),
    [sym_string] = STATE(41),
    [sym_identifier] = ACTIONS(23),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(25),
    [anon_sym_struct] = ACTIONS(27),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_using] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_string_token1] = ACTIONS(39),
  },
  [5] = {
    [sym_expression] = STATE(53),
    [sym_declaration] = STATE(43),
    [sym_decl_let] = STATE(47),
    [sym_decl_struct] = STATE(47),
    [sym_decl_enum] = STATE(47),
    [sym_decl_fn] = STATE(47),
    [sym_decl_using] = STATE(47),
    [sym_symbol_ref] = STATE(43),
    [sym_semicolon_grouping] = STATE(43),
    [sym_string] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_identifier] = ACTIONS(7),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_using] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_string_token1] = ACTIONS(21),
  },
  [6] = {
    [sym_expression] = STATE(53),
    [sym_declaration] = STATE(43),
    [sym_decl_let] = STATE(47),
    [sym_decl_struct] = STATE(47),
    [sym_decl_enum] = STATE(47),
    [sym_decl_fn] = STATE(47),
    [sym_decl_using] = STATE(47),
    [sym_symbol_ref] = STATE(43),
    [sym_semicolon_grouping] = STATE(43),
    [sym_string] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_identifier] = ACTIONS(7),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_using] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_string_token1] = ACTIONS(21),
  },
  [7] = {
    [sym_expression] = STATE(40),
    [sym_declaration] = STATE(41),
    [sym_decl_let] = STATE(42),
    [sym_decl_struct] = STATE(42),
    [sym_decl_enum] = STATE(42),
    [sym_decl_fn] = STATE(42),
    [sym_decl_using] = STATE(42),
    [sym_symbol_ref] = STATE(41),
    [sym_semicolon_grouping] = STATE(41),
    [sym_expression_list_semicolon] = STATE(69),
    [sym_string] = STATE(41),
    [sym_identifier] = ACTIONS(23),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(25),
    [anon_sym_struct] = ACTIONS(27),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_using] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_string_token1] = ACTIONS(39),
  },
  [8] = {
    [sym_expression] = STATE(24),
    [sym_declaration] = STATE(41),
    [sym_decl_let] = STATE(42),
    [sym_decl_struct] = STATE(42),
    [sym_decl_enum] = STATE(42),
    [sym_decl_fn] = STATE(42),
    [sym_decl_using] = STATE(42),
    [sym_symbol_ref] = STATE(41),
    [sym_semicolon_grouping] = STATE(41),
    [sym_string] = STATE(41),
    [sym_identifier] = ACTIONS(23),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(25),
    [anon_sym_struct] = ACTIONS(27),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_using] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_string_token1] = ACTIONS(39),
  },
  [9] = {
    [sym_expression] = STATE(52),
    [sym_declaration] = STATE(41),
    [sym_decl_let] = STATE(42),
    [sym_decl_struct] = STATE(42),
    [sym_decl_enum] = STATE(42),
    [sym_decl_fn] = STATE(42),
    [sym_decl_using] = STATE(42),
    [sym_symbol_ref] = STATE(41),
    [sym_semicolon_grouping] = STATE(41),
    [sym_string] = STATE(41),
    [sym_identifier] = ACTIONS(23),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(25),
    [anon_sym_struct] = ACTIONS(27),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_using] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_string_token1] = ACTIONS(39),
  },
  [10] = {
    [sym_expression] = STATE(27),
    [sym_declaration] = STATE(41),
    [sym_decl_let] = STATE(42),
    [sym_decl_struct] = STATE(42),
    [sym_decl_enum] = STATE(42),
    [sym_decl_fn] = STATE(42),
    [sym_decl_using] = STATE(42),
    [sym_symbol_ref] = STATE(41),
    [sym_semicolon_grouping] = STATE(41),
    [sym_string] = STATE(41),
    [sym_identifier] = ACTIONS(23),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(25),
    [anon_sym_struct] = ACTIONS(27),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_using] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_string_token1] = ACTIONS(39),
  },
  [11] = {
    [sym_expression] = STATE(28),
    [sym_declaration] = STATE(41),
    [sym_decl_let] = STATE(42),
    [sym_decl_struct] = STATE(42),
    [sym_decl_enum] = STATE(42),
    [sym_decl_fn] = STATE(42),
    [sym_decl_using] = STATE(42),
    [sym_symbol_ref] = STATE(41),
    [sym_semicolon_grouping] = STATE(41),
    [sym_string] = STATE(41),
    [sym_identifier] = ACTIONS(23),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(25),
    [anon_sym_struct] = ACTIONS(27),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_using] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_string_token1] = ACTIONS(39),
  },
  [12] = {
    [sym_expression] = STATE(32),
    [sym_declaration] = STATE(41),
    [sym_decl_let] = STATE(42),
    [sym_decl_struct] = STATE(42),
    [sym_decl_enum] = STATE(42),
    [sym_decl_fn] = STATE(42),
    [sym_decl_using] = STATE(42),
    [sym_symbol_ref] = STATE(41),
    [sym_semicolon_grouping] = STATE(41),
    [sym_string] = STATE(41),
    [sym_identifier] = ACTIONS(23),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(25),
    [anon_sym_struct] = ACTIONS(27),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_fn] = ACTIONS(31),
    [anon_sym_using] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [aux_sym_string_token1] = ACTIONS(39),
  },
  [13] = {
    [sym_expression] = STATE(53),
    [sym_declaration] = STATE(43),
    [sym_decl_let] = STATE(47),
    [sym_decl_struct] = STATE(47),
    [sym_decl_enum] = STATE(47),
    [sym_decl_fn] = STATE(47),
    [sym_decl_using] = STATE(47),
    [sym_symbol_ref] = STATE(43),
    [sym_semicolon_grouping] = STATE(43),
    [sym_string] = STATE(43),
    [sym_identifier] = ACTIONS(7),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_using] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_string_token1] = ACTIONS(21),
  },
  [14] = {
    [sym_expression] = STATE(38),
    [sym_declaration] = STATE(43),
    [sym_decl_let] = STATE(47),
    [sym_decl_struct] = STATE(47),
    [sym_decl_enum] = STATE(47),
    [sym_decl_fn] = STATE(47),
    [sym_decl_using] = STATE(47),
    [sym_symbol_ref] = STATE(43),
    [sym_semicolon_grouping] = STATE(43),
    [sym_string] = STATE(43),
    [sym_identifier] = ACTIONS(7),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_using] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_string_token1] = ACTIONS(21),
  },
  [15] = {
    [sym_expression] = STATE(34),
    [sym_declaration] = STATE(43),
    [sym_decl_let] = STATE(47),
    [sym_decl_struct] = STATE(47),
    [sym_decl_enum] = STATE(47),
    [sym_decl_fn] = STATE(47),
    [sym_decl_using] = STATE(47),
    [sym_symbol_ref] = STATE(43),
    [sym_semicolon_grouping] = STATE(43),
    [sym_string] = STATE(43),
    [sym_identifier] = ACTIONS(7),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_using] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_string_token1] = ACTIONS(21),
  },
  [16] = {
    [sym_expression] = STATE(35),
    [sym_declaration] = STATE(43),
    [sym_decl_let] = STATE(47),
    [sym_decl_struct] = STATE(47),
    [sym_decl_enum] = STATE(47),
    [sym_decl_fn] = STATE(47),
    [sym_decl_using] = STATE(47),
    [sym_symbol_ref] = STATE(43),
    [sym_semicolon_grouping] = STATE(43),
    [sym_string] = STATE(43),
    [sym_identifier] = ACTIONS(7),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_using] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_string_token1] = ACTIONS(21),
  },
  [17] = {
    [sym_expression] = STATE(36),
    [sym_declaration] = STATE(43),
    [sym_decl_let] = STATE(47),
    [sym_decl_struct] = STATE(47),
    [sym_decl_enum] = STATE(47),
    [sym_decl_fn] = STATE(47),
    [sym_decl_using] = STATE(47),
    [sym_symbol_ref] = STATE(43),
    [sym_semicolon_grouping] = STATE(43),
    [sym_string] = STATE(43),
    [sym_identifier] = ACTIONS(7),
    [sym_doc_comment_block] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_fn] = ACTIONS(15),
    [anon_sym_using] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [aux_sym_string_token1] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_EQ,
    ACTIONS(45), 1,
      anon_sym_EQ_GT,
    ACTIONS(47), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [17] = 5,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      anon_sym_EQ,
    ACTIONS(53), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [34] = 5,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      anon_sym_COLON,
    ACTIONS(57), 1,
      anon_sym_EQ,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [51] = 5,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_EQ,
    ACTIONS(59), 1,
      anon_sym_EQ_GT,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [68] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
  [80] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(63), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [92] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(65), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [104] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
  [116] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
  [128] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(69), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [140] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [152] = 5,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      aux_sym_expression_list_semicolon_repeat1,
  [168] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
  [180] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
  [192] = 4,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(79), 1,
      anon_sym_EQ,
    ACTIONS(81), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [206] = 5,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      aux_sym_expression_list_semicolon_repeat1,
  [222] = 4,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(88), 1,
      anon_sym_EQ,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [236] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
  [248] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
  [260] = 5,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      aux_sym_expression_list_semicolon_repeat1,
  [276] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
  [288] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(93), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [300] = 5,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      aux_sym_expression_list_semicolon_repeat1,
  [316] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(99), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [328] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(101), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [340] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
  [352] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(61), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [364] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(67), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [376] = 5,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      aux_sym_expression_list_semicolon_repeat1,
  [392] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
  [404] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(77), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [416] = 5,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      aux_sym_expression_list_semicolon_repeat1,
  [432] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(75), 3,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [444] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_SEMI,
  [456] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(83), 2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [467] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [478] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(107), 1,
      sym_identifier,
  [488] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [498] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_identifier,
  [508] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      sym_identifier,
  [518] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
  [528] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(117), 1,
      aux_sym_string_token1,
  [538] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
  [548] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(121), 1,
      sym_identifier,
  [558] = 2,
    ACTIONS(123), 1,
      aux_sym_string_token2,
    ACTIONS(5), 2,
      sym_doc_comment_block,
      sym_line_comment,
  [566] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
  [576] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(127), 1,
      sym_identifier,
  [586] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(129), 1,
      sym_identifier,
  [596] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      sym_identifier,
  [606] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      sym_identifier,
  [616] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(135), 1,
      sym_identifier,
  [626] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
  [636] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(139), 1,
      aux_sym_string_token1,
  [646] = 3,
    ACTIONS(3), 1,
      sym_doc_comment_block,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(141), 1,
      sym_identifier,
  [656] = 2,
    ACTIONS(143), 1,
      aux_sym_string_token2,
    ACTIONS(5), 2,
      sym_doc_comment_block,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 17,
  [SMALL_STATE(20)] = 34,
  [SMALL_STATE(21)] = 51,
  [SMALL_STATE(22)] = 68,
  [SMALL_STATE(23)] = 80,
  [SMALL_STATE(24)] = 92,
  [SMALL_STATE(25)] = 104,
  [SMALL_STATE(26)] = 116,
  [SMALL_STATE(27)] = 128,
  [SMALL_STATE(28)] = 140,
  [SMALL_STATE(29)] = 152,
  [SMALL_STATE(30)] = 168,
  [SMALL_STATE(31)] = 180,
  [SMALL_STATE(32)] = 192,
  [SMALL_STATE(33)] = 206,
  [SMALL_STATE(34)] = 222,
  [SMALL_STATE(35)] = 236,
  [SMALL_STATE(36)] = 248,
  [SMALL_STATE(37)] = 260,
  [SMALL_STATE(38)] = 276,
  [SMALL_STATE(39)] = 288,
  [SMALL_STATE(40)] = 300,
  [SMALL_STATE(41)] = 316,
  [SMALL_STATE(42)] = 328,
  [SMALL_STATE(43)] = 340,
  [SMALL_STATE(44)] = 352,
  [SMALL_STATE(45)] = 364,
  [SMALL_STATE(46)] = 376,
  [SMALL_STATE(47)] = 392,
  [SMALL_STATE(48)] = 404,
  [SMALL_STATE(49)] = 416,
  [SMALL_STATE(50)] = 432,
  [SMALL_STATE(51)] = 444,
  [SMALL_STATE(52)] = 456,
  [SMALL_STATE(53)] = 467,
  [SMALL_STATE(54)] = 478,
  [SMALL_STATE(55)] = 488,
  [SMALL_STATE(56)] = 498,
  [SMALL_STATE(57)] = 508,
  [SMALL_STATE(58)] = 518,
  [SMALL_STATE(59)] = 528,
  [SMALL_STATE(60)] = 538,
  [SMALL_STATE(61)] = 548,
  [SMALL_STATE(62)] = 558,
  [SMALL_STATE(63)] = 566,
  [SMALL_STATE(64)] = 576,
  [SMALL_STATE(65)] = 586,
  [SMALL_STATE(66)] = 596,
  [SMALL_STATE(67)] = 606,
  [SMALL_STATE(68)] = 616,
  [SMALL_STATE(69)] = 626,
  [SMALL_STATE(70)] = 636,
  [SMALL_STATE(71)] = 646,
  [SMALL_STATE(72)] = 656,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_semicolon, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_semicolon, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_fn, 2, 0, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 2, 0, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_let, 2, 0, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_struct, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_using, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_let, 6, 0, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_enum, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_fn, 4, 0, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_let, 4, 0, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semicolon_grouping, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_let, 4, 0, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_semicolon_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_semicolon_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_semicolon_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_ref, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list_semicolon, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [115] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressions, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_nano(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
