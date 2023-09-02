/*
    CODECHEF - PESUECC
*/

/*
    Pair is a template class used to store a pair of values (two values of potentially different types) 
    in a single object, commonly used for key-value associations in various data structures like maps and sets.
*/

#include <iostream>
#include <utility>  // Include the necessary header for std::pair

int main() { 
    // pair < datatype, datatype > pair_name; 
    std::pair<int, double> myPair;  // Declare a pair with int and double
    
    myPair.first = 42;  // Assign a value to the first element
    myPair.second = 3.14;  // Assign a value to the second element
    
    std::cout << "First: " << myPair.first << std::endl;    // Output: First: 42
    std::cout << "Second: " << myPair.second << std::endl;  // Output: Second: 3.14
    
    return 0;
}