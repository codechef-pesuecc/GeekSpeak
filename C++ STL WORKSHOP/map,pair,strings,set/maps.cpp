/*
    CODECHEF - PESUECC
*/ 

/*
    Map is a container that stores key-value pairs in a sorted order, 
    allowing efficient retrieval and modification of values based on their associated keys.
*/

#include <iostream>
#include <map>

using namespace std;

int main() { 

    // map< datatype, datatype >map_name; 
    map<int, float> m;

    // different ways to insert key-value pairs into map 
    m[0] = 1.2;
    m[1] = 0.7;
    m[2] = 9.99; 
    m[3] = 6.78; 
    m[4] = 9.1; 

    m.insert(make_pair(5,5.6));
    m.insert(make_pair(6,6.6));

    // printing the key value pairs of map 
    cout<<"The contents of the map m : \n"; 
    for (const auto &p: m) {
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<"Is the map m empty? "<<m.empty()<<endl;  // 0(false) means not empty, 1(true) means empty 

    auto f = m.find(2);
    cout<<"f->second "<<f->second<<endl;
    
    // removing an element from the map 
    m.erase(4); 
    cout<<"After removal "<<endl;
    for (auto p: m) {
        cout<<p.first<<" "<<p.second<<endl;
    }

    // deleting the contents of the whole map
    m.clear();

    for (const auto &p: m) {
        cout<<p.first<<" "<<p.second<<endl;
    }

}