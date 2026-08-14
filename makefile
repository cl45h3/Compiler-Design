CXX     = g++
LEX     = flex
CXXFLAGS = -std=c++17 -Wall

SRC_DIR = src
BIN_DIR = bin

LEXER_SRC = $(SRC_DIR)/lexer.l
LEXER_GEN = $(SRC_DIR)/lex.yy.cc
TARGET    = $(BIN_DIR)/lexer

.PHONY: all clean run

all: $(TARGET)

$(LEXER_GEN): $(LEXER_SRC)
	$(LEX) -o $(LEXER_GEN) $(LEXER_SRC)

$(TARGET): $(LEXER_GEN)
	mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(LEXER_GEN) -o $(TARGET)

run: all
	./run.sh $(TARGET)

clean:
	rm -f $(LEXER_GEN)
	rm -rf $(BIN_DIR)
	rm -rf output
