#include <iostream>
#include <string>

int main() {
    std::string input_word, original_word = "world";
    
    std::cout << "Enter a word: ";
    std::cin >> input_word;

    std::cout << input_word << " " << original_word << std::endl;

    return 0;
}