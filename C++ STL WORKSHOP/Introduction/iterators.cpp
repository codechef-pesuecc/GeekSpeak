/*
    CODECHEF - PESUECC
*/

#include <iostream>
#include <iterator> 
#include <vector>
using namespace std;

int main()
{
	vector <int> ar = {1, 2, 3, 4, 5};
	
    vector <int>::iterator it1;

	cout << "Vector elements are: ";
    for(it1=ar.begin(); it1<ar.end(); it1++)
        cout << *it1 << " ";

    vector<int>::iterator ptr2 = ar.begin();
    advance(ptr2, 3);
    cout << "The value of iterator after advancing is: " << *ptr2 << endl;

    return 0;	
}
