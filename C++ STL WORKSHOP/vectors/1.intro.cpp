/*
  CODECHEF - PESUECC
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
  // vector< datatype >vector_name; 
  vector<int> v;
  v.push_back(10); // adds elements to the vector
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);

  for(auto x:v)
    cout<<x<<' ';

  v.pop_back();
  v.pop_back();

  for(auto x:v)
    cout<<x<<' ';
    
  cout<<endl; //pop_back removes elements from the vector
  cout<<v.size()<<endl; //size
}
