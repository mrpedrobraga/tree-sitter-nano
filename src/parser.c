#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_let = 1,
  anon_sym_identifier = 2,
  anon_sym_COLON = 3,
  anon_sym_bool = 4,
  anon_sym_i32 = 5,
  anon_sym_u32 = 6,
  anon_sym_u8 = 7,
  sym_identifier = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  sym_source_file = 11,
  sym_expressions = 12,
  sym_expression = 13,
  sym_declaration = 14,
  sym_decl_let = 15,
  aux_sym_expressions_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_let] = "let",
  [anon_sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [anon_sym_bool] = "bool",
  [anon_sym_i32] = "i32",
  [anon_sym_u32] = "u32",
  [anon_sym_u8] = "u8",
  [sym_identifier] = "identifier",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym_expressions] = "expressions",
  [sym_expression] = "expression",
  [sym_declaration] = "declaration",
  [sym_decl_let] = "decl_let",
  [aux_sym_expressions_repeat1] = "expressions_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_identifier] = anon_sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u8] = anon_sym_u8,
  [sym_identifier] = sym_identifier,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym_expressions] = sym_expressions,
  [sym_expression] = sym_expression,
  [sym_declaration] = sym_declaration,
  [sym_decl_let] = sym_decl_let,
  [aux_sym_expressions_repeat1] = aux_sym_expressions_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_identifier] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [aux_sym_expressions_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '3') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '3') ADVANCE(34);
      if (lookahead == '8') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'l') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_identifier);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(29);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(30);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym_expressions] = STATE(11),
    [sym_expression] = STATE(2),
    [sym_declaration] = STATE(6),
    [sym_decl_let] = STATE(7),
    [aux_sym_expressions_repeat1] = STATE(2),
    [anon_sym_let] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_let,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_declaration,
    STATE(7), 1,
      sym_decl_let,
    STATE(3), 2,
      sym_expression,
      aux_sym_expressions_repeat1,
  [17] = 5,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      anon_sym_let,
    STATE(6), 1,
      sym_declaration,
    STATE(7), 1,
      sym_decl_let,
    STATE(3), 2,
      sym_expression,
      aux_sym_expressions_repeat1,
  [34] = 4,
    ACTIONS(3), 1,
      anon_sym_let,
    STATE(6), 1,
      sym_declaration,
    STATE(7), 1,
      sym_decl_let,
    STATE(8), 1,
      sym_expression,
  [47] = 2,
    ACTIONS(14), 1,
      anon_sym_COLON,
    ACTIONS(12), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [55] = 1,
    ACTIONS(16), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [60] = 1,
    ACTIONS(18), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [65] = 1,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [70] = 1,
    ACTIONS(22), 1,
      anon_sym_identifier,
  [74] = 1,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
  [78] = 1,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 55,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 65,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 74,
  [SMALL_STATE(11)] = 78,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expressions, 1, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2, 0, 0),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expressions_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_let, 2, 0, 0),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_let, 4, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [24] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
