#include <iostream>
// SavchukAlexei2005
// Windows-1251: 53 61 76 63 68 75 6b 41 6c 65 78 65 69 32 30 30 35 00
// в UTF-8:      53 61 76 63 68 75 6b 41 6c 65 78 65 69 32 30 30 35 00
// в UTF-16:     00 53 00 61 00 76 00 63 00 68 00 75 00 6b 00 41 00 6c 00 65 00 78 00 65 00 69 00 32 00 30 00 30 00 35 00 00 00

// СавчукАлексей2005
// Windows-1251: d1 e0 e2 f7 f3 ea c0 eb e5 ea f1 e5 e9 32 30 30 35 00
// в UTF-8:      d0a1 d0b0 d0b2 d187 d183 d0ba d090 d0bb d0b5 d0ba d181 d0b5 d0b9 32 30 30 35
// в UTF-16:     21 04 30 04 32 04 47 04 43 04 3a 04 10 04 3b 04 35 04 3a 04 41 04 35 04 39 04 32 00 30 00 30 00 35 00 00 00

// Савчук2005Alexei
// Windows-1251: d1 e0 e2 f7 f3 ea 32 30 30 35 41 6c 65 78 65 69 00
// в UTF-8:      d0a1 d0b0 d0b2 d187 d183 d0ba 32 30 30 35 41 6c 65 78 65 69
// в UTF-16:     21 04 30 04 32 04 47 04 43 04 3a 04 32 00 30 00 30 00 35 00 41 00 6c 00 65 00 78 00 65 00 69 00 00 00

int main()
{
    int number = 0x12345678;
    char hello[] = "Hello, ";
    char lfie[] = "SavchukAlexei2005";
    char rfie[] = "СавчукАлексей2005";
    char lr[] = "Савчук2005Alexei";
 
    wchar_t Lfie[] = L"SavchukAlexei2005";
    wchar_t fie[] = L"СавчукАлексей2005";
    wchar_t LR[] = L"Савчук2005Alexei";

    std::cout << hello << lfie << std::endl;    
    return 0;
}    