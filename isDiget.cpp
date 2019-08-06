#include <iostream>

int main() {
    std::cout << "Input string and I'll find digit(s) from it ---> ";
    unsigned char CharArray[50]{};
    std::cin >> CharArray;
    std::cout << "is diget : ";

    for(char CharArrays : CharArray) {
        if ((CharArrays >= 48) && (CharArrays <= 57)) {
            std::cout << CharArrays <<" ";
        }
        
    }
    std::cout<< std::endl;
    return 0; 
}