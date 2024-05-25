package tree_sitter_nano_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-nano"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_nano.Language())
	if language == nil {
		t.Errorf("Error loading Nano grammar")
	}
}
