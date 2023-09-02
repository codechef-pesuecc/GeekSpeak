/*
  CODECHEF - PESUECC
*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int arr[] = {10,20,30,40};
  vector<int> v(arr,arr+4);

  auto it = find(v.begin(),v.end(),40);

  if (it != v.end())
    cout<<"The element 40 exists in the vector."<<endl;
  else
    cout<<"The element does not exist in the vector."<<endl;
} 

