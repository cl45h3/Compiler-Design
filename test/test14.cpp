// =================================================================
// LEXICAL ANALYZER COMPREHENSIVE TEST SUITE
// =================================================================

#include <iostream>
#include <string>

int main() {
    // -------------------------------------------------------------
    // 1. OCTAL LITERALS
    // -------------------------------------------------------------
    int valid_oct1 = 0755;            // VALID: Standard Octal
    int valid_oct2 = 0123u;           // VALID: Octal with 'u' suffix
    int valid_oct3 = 0777ULL;         // VALID: Octal with 'ULL' suffix
    int bad_oct1   = 0789;            // ERROR: Invalid octal digit (8 and 9)
    int bad_oct2   = 012abc;          // ERROR: Invalid octal character sequence

    // -------------------------------------------------------------
    // 2. HEXADECIMAL LITERALS
    // -------------------------------------------------------------
    int valid_hex1 = 0x1A3F;          // VALID: Standard Hex
    int valid_hex2 = 0XFF12u;         // VALID: Hex with 'u' suffix
    int valid_hex3 = 0xABCDLL;        // VALID: Hex with 'LL' suffix
    int bad_hex1   = 0x1G23;          // ERROR: Invalid hex digit 'G'
    int bad_hex2   = 0x;              // ERROR: Incomplete hexadecimal literal

    // -------------------------------------------------------------
    // 3. BINARY LITERALS
    // -------------------------------------------------------------
    int valid_bin1 = 0b1010;          // VALID: Standard Binary
    int valid_bin2 = 0B1101u;         // VALID: Binary with 'u' suffix
    int bad_bin1   = 0b1020;          // ERROR: Invalid binary digit '2'
    int bad_bin2   = 0b;              // ERROR: Incomplete binary literal

    // -------------------------------------------------------------
    // 4. FLOATING-POINT LITERALS & EXPONENTS
    // -------------------------------------------------------------
    double valid_flt1 = 12.34;        // VALID: Standard Float
    double valid_flt2 = .567f;        // VALID: Float leading dot with 'f' suffix
    double valid_flt3 = 100.f;        // VALID: Float trailing dot with 'f' suffix
    double valid_flt4 = 1.2e-3;       // VALID: Exponent notation
    double valid_flt5 = 3.14159L;     // VALID: Float with 'L' suffix
    
    double bad_flt1   = 12.3u;        // ERROR: Invalid float suffix 'u'
    double bad_flt2   = 12.3.4;       // ERROR: Multiple decimal points
    double bad_flt3   = 1.2e;         // ERROR: Incomplete exponent
    double bad_flt4   = .e5;          // ERROR: Missing digits before exponent
    double bad_flt5   = 1.2e3e4;      // ERROR: Multiple exponents

    // -------------------------------------------------------------
    // 5. DECIMALS & INVALID IDENTIFIERS
    // -------------------------------------------------------------
    int valid_int   = 12345;          // VALID: Decimal Integer
    int valid_id    = var_name123;    // VALID: Identifier
    int bad_id      = 123var_name;    // ERROR: Identifier starting with digit

    // -------------------------------------------------------------
    // 6. CHARACTER LITERALS (ALL PREFIXES & ERRORS)
    // -------------------------------------------------------------
    auto valid_char1 = 'a';           // VALID: Standard Char
    auto valid_char2 = L'B';          // VALID: Wide Char (L)
    auto valid_char3 = u8'C';         // VALID: UTF-8 Char (u8)
    auto valid_char4 = u'D';          // VALID: UTF-16 Char (u)
    auto valid_char5 = U'E';          // VALID: UTF-32 Char (U)
    auto valid_char6 = '\n';          // VALID: Escape sequence
    auto valid_char7 = '\x41';        // VALID: Hex escape sequence

    auto bad_char1   = '';            // ERROR: Empty character literal
    auto bad_char2   = 'abc';         // ERROR: Multi-character literal
    auto bad_char3   = L'xyz';        // ERROR: Prefixed multi-character literal
    auto bad_char4   = '\q';          // ERROR: Invalid escape sequence in char
    auto bad_char5   = u8'\z';        // ERROR: Invalid escape in prefixed char
    auto bad_char6   = 'a;            // ERROR: Unterminated standard character literal
    auto bad_char7   = L'B;           // ERROR: Unterminated wide character literal

    // -------------------------------------------------------------
    // 7. STRING LITERALS (ALL PREFIXES & ERRORS)
    // -------------------------------------------------------------
    auto valid_str1 = "Hello\nWorld"; // VALID: Standard String
    auto valid_str2 = L"Wide String";  // VALID: Wide String (L)
    auto valid_str3 = u8"UTF-8";      // VALID: UTF-8 String (u8)
    auto valid_str4 = u"UTF-16";      // VALID: UTF-16 String (u)
    auto valid_str5 = U"UTF-32";      // VALID: UTF-32 String (U)

    auto bad_str1   = "Bad \z esc";   // ERROR: Invalid escape sequence in string
    auto bad_str2   = u8"Bad \m esc"; // ERROR: Invalid escape in prefixed string
    auto bad_str3   = "Unterminated string literal;      // ERROR: Unterminated standard string
    auto bad_str4   = L"Unterminated wide string;        // ERROR: Unterminated wide string
    auto bad_str5   = u"Unterminated UTF16 string;       // ERROR: Unterminated UTF-16 string

    return 0;
}