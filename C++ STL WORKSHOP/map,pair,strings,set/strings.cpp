/*
    CODECHEF - PESUECC
*/

#include <iostream>
#include <string>
#include <algorithm> // For reverse transform

int main() {
    std::string str1 = "Hello";
    std::string str2 = "World";

    // Concatenation
    std::string concatenated = str1 + " " + str2;
    std::cout << "Concatenated: " << concatenated << std::endl;

    // Substring
    std::string substring = concatenated.substr(6, 5); // Starting at index 6, length 5
    std::cout << "Substring: " << substring << std::endl;

    // Reversing
    std::string reversed = concatenated;
    std::reverse(reversed.begin(), reversed.end());
    std::cout << "Reversed: " << reversed << std::endl;

    // Size (length)
    std::cout << "Size: " << concatenated.size() << std::endl;

    // Transform to uppercase
    std::string transformed = concatenated;
    std::transform(transformed.begin(), transformed.end(), transformed.begin(), ::toupper);
    std::cout << "Transformed: " << transformed << std::endl;

    return 0;
}