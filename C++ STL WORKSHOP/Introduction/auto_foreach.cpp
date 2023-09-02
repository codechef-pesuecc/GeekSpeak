/*
    CODECHEF - PESUECC
*/

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    auto x = 4;
    auto y = 3.37;
    auto z = 3.37f;
    auto c = 'a';
    auto ptr = &x; 

    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(z).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(ptr).name() << endl;

    /*
        i -> integer 
        d -> double 
        f -> float 
        c -> char 
        Pi -> pointer
    */
   
    // for (type variableName : arrayName) {
        // code block to be executed
    // }

    int myNumbers[5] = {10, 20, 30, 40, 50};

    for (int x: myNumbers)
        cout << x << " ";

    return 0;
}