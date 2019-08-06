#include <iostream>

int main() {
    std::cout << "Input string and I'll upper all letters ---> ";
    unsigned char CharArray[150]{};
    std::cin >> CharArray;
    std::cout << "Result ------------------------------------> ";
    char ch;  
    for(char CharArrays : CharArray) {
        if ((CharArrays >= 97) && (CharArrays <= 122)) {
            ch = CharArrays - 32;
        }
        else {
            ch = CharArrays;
        }
        std::cout << ch;
    }
    std::cout<< std::endl;
    return 0; 
}