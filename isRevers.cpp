#include <iostream>

void reverse(char& first_el, char& last_el) {
    char temp = first_el;
    first_el = last_el;
    last_el = temp;
}

int main() {
    std::cout << "Input string and I'll reverse all symbols ---> ";
    const uint16_t len_str = 150;
    char CharArray[len_str]{};
    std::cin >> CharArray;
    std::cout << "Result --------------------------------------> ";

    short int count = 0;

    for (count = 0; CharArray[count] !='\0'; ++count) {
        ;
    } 
     for (char *begin = CharArray, *end = CharArray + (count - 1); begin <= end; ++begin, --end) {
         reverse(*begin, *end);
     }
    
    std::cout << CharArray << std::endl;
    
    return 0; 
}