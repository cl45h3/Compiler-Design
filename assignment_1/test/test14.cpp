#include <iostream>
#include <string>

int main() {
  
    int valid_oct1 = 0755;            
    int valid_oct2 = 0123u;           
    int valid_oct3 = 0777ULL;         
    int bad_oct1   = 0789;           
    int bad_oct2   = 012abc;          

    int valid_hex1 = 0x1A3F;          
    int valid_hex2 = 0XFF12u;         
    int valid_hex3 = 0xABCDLL;        
    int bad_hex1   = 0x1G23;          
    int bad_hex2   = 0x;             
    
    int valid_bin1 = 0b1010;          
    int valid_bin2 = 0B1101u;         
    int bad_bin1   = 0b1020;          
    int bad_bin2   = 0b;              

    double valid_flt1 = 12.34;        
    double valid_flt2 = .567f;        
    double valid_flt3 = 100.f;        
    double valid_flt4 = 1.2e-3;       
    double valid_flt5 = 3.14159L;     
    
    double bad_flt1   = 12.3u;        
    double bad_flt2   = 12.3.4;       
    double bad_flt3   = 1.2e;         
    double bad_flt4   = .e5;          
    double bad_flt5   = 1.2e3e4;      

    
    int valid_int   = 12345;          
    int valid_id    = var_name123;    
    int bad_id      = 123var_name;    

    auto valid_char1 = 'a';           
    auto valid_char2 = L'B';          
    auto valid_char3 = u8'C';         
    auto valid_char4 = u'D';         
    auto valid_char5 = U'E';          
    auto valid_char6 = '\n';          
    auto valid_char7 = '\x41';        

    auto bad_char1   = '';            
    auto bad_char2   = 'abc';         
    auto bad_char3   = L'xyz';        
    auto bad_char4   = '\q';          
    auto bad_char5   = u8'\z';        
    auto bad_char6   = 'a;            
    auto bad_char7   = L'B;           

    
    auto valid_str1 = "Hello\nWorld"; 
    auto valid_str2 = L"Wide String"; 
    auto valid_str3 = u8"UTF-8";      
    auto valid_str4 = u"UTF-16";      
    auto valid_str5 = U"UTF-32";      

    auto bad_str1   = "Bad \z esc"; 
    auto bad_str2   = u8"Bad \m esc";
    auto bad_str3   = "Unterminated string literal;    
    auto bad_str4   = L"Unterminated wide string;      
    auto bad_str5   = u"Unterminated UTF16 string;     
    return 0;
}