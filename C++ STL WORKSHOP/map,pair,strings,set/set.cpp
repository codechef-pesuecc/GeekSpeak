/*
    CODECHEF - PESUECC
*/

/*
    Set is a container that stores a collection of unique elements in sorted order,
    allowing efficient insertion, deletion, and retrieval operations.
*/

#include <iostream> 
#include <set>
#include <algorithm>
using namespace std;

int main() 
{ 
    // set< datatype > set_name; 
    
    set <int> s;
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(2);
    s.emplace(6);

    for (auto i: s)
        cout << i << " ";
    cout << endl;
    cout << s.size() << endl;

    auto it = s.find(3);
    cout << *it << endl;
    auto it = s.find(13749);
    cout << *it << endl;

    s.erase(2);
    for (auto i: s)
        cout << i << " ";
    cout << endl;

    auto it1 = s.find(1);
    auto it2 = s.find(7);
    s.erase(it1, it2);
    for (auto i: s)
        cout << i << " ";
    cout << endl;

    // s.erase(s.begin());


    // set <int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(1);
    // s.insert(4);

    // for (auto i: s)
    //     cout << i << " ";
    // cout << endl;

    // cout << s.size() << endl;

    // auto it = s.find(6);
    // cout << *it << endl;

    // auto it1 = s.find(2);
    // auto it2 = s.find(4);
    // s.erase(it1, it2);

    // for (auto i: s)
    //     cout << i << " ";
    // cout << endl;

    // s.erase(1);
    // s.erase(4);

    // s.erase(s.begin());
    // s.erase(s.begin());
    // s.erase(s.begin());
    // for (auto i: s)
    //     cout << i << " ";
    // cout << endl;
    
    set <int, greater<int>> s1;
    s1.insert(10);
    s1.insert(5);
    s1.insert(12);
    s1.insert(4);
    
    set <int, greater<int>> :: iterator itr;
 
    cout << "\nNew set:\n";
    for (itr = s1.begin(); itr!=s1.end(); itr++)
        cout << *itr << " ";
    cout << endl << endl;
    
    set <int> s2;
    s2.insert(1);
    s2.insert(2);
    s2.insert(3);
    s2.insert(4);

    set <int>::iterator itr;

    for (itr = s2.begin(); itr != s2.end(); itr++)
        cout << *itr << " ";
    cout << endl;

    cout << "s2.lower_bound(2) : " << *s2.lower_bound(2) << endl;
    cout << "s2.upper_bound(3) : " << *s2.upper_bound(3) << endl << endl;

    cout << "s2.lower_bound(1) : " << *s2.lower_bound(1) << endl;
    cout << "s2.upper_bound(4) : " << *s2.upper_bound(4) << endl << endl;

    cout << "s2.lower_bound(5) : " << *s2.lower_bound(5) << endl;
    cout << "s2.upper_bound(-1) : " << *s2.upper_bound(-1) << endl;


    // SET ALGORITHMS:

    // bool AincludesB = std::includes(A.begin(), A.end(), B.begin(), B.end());
    // merge(A.begin(), A.end(), B.begin(), B.end(), result);
    // set_union (InputIterator first1, InputIterator last1, InputIterator first2, InputIterator last2, OutputIterator result);
    // set_intersection (InputIterator first1, InputIterator last1, InputIterator first2, InputIterator last2, OutputIterator result);
    // set_difference (InputIterator first1, InputIterator last1, InputIterator first2, InputIterator last2, OutputIterator result);
    // set_symmetric_difference (InputIterator first1, InputIterator last1, InputIterator first2, InputIterator last2, OutputIterator result);

    set <int> odd = {1,3,5,2,4};
    set <int> even = {2,4,6};
 
    set <int> s;
    set_union(odd.begin(), odd.end(), even.begin(), even.end(), inserter(s, s.begin()));
 
    for (auto const &e: s)
        cout << e << ' ';

    return 0;
}