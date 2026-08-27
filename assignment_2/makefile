CXX = g++
LEX = flex
BISON = bison
CXXFLAGS = -std=c++17 -Wall

SRC_DIR = src
BIN_DIR = bin
TARGET = $(BIN_DIR)/syntax_analyzer
LEXER_TARGET = $(BIN_DIR)/lexer
PARSER_SRC = $(SRC_DIR)/parser.y
PARSER_GEN = $(SRC_DIR)/parser.tab.cc
PARSER_HDR = $(SRC_DIR)/parser.tab.h
LEXER_SRC = $(SRC_DIR)/lexer.l
LEXER_GEN = $(SRC_DIR)/lex.yy.cc

.PHONY: all clean run

all: $(TARGET) $(LEXER_TARGET)

$(PARSER_GEN) $(PARSER_HDR): $(PARSER_SRC)
	$(BISON) -v --defines=$(PARSER_HDR) -o $(PARSER_GEN) $(PARSER_SRC)

$(LEXER_GEN): $(LEXER_SRC) $(PARSER_HDR)
	$(LEX) -o $(LEXER_GEN) $(LEXER_SRC)

$(TARGET): $(PARSER_GEN) $(LEXER_GEN)
	mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(PARSER_GEN) $(LEXER_GEN) -o $(TARGET)

$(LEXER_TARGET): $(SRC_DIR)/lexer_main.cc $(LEXER_GEN)
	mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(SRC_DIR)/lexer_main.cc $(LEXER_GEN) -o $(LEXER_TARGET)

run: all
	./run.sh $(TARGET)

clean:
	rm -f $(PARSER_GEN) $(PARSER_HDR) $(SRC_DIR)/parser.output $(LEXER_GEN)
	rm -rf $(BIN_DIR) output
