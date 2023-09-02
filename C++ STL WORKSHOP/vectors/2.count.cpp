/*
  CODECHEF - PESUECC
*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int arr[] = {10,20,10,20,30,40,10,20,30,10,30};
  vector<int> v(arr, arr+11); 

  int c = count(v.begin(),v.end(),20); //count of 20
  cout<<"The count of 20 is:"<<c<<endl;
  
  int cc = count(v.begin(),v.end(),50); //count of 50 (not exist)
  cout<<"The count of 50 is:"<<cc<<endl; 

}
