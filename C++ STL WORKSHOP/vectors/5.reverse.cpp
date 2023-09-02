/*
  CODECHEF - PESUECC
*/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v;
  for(int i=1;i<=10;i++)
    v.push_back(i);

  cout<<"The vector before reverse is:\n";

  for(int i=0;i<10;i++)
    cout<<v[i]<<' ';

  cout<<endl;

  reverse(v.begin(),v.end()); //reverse the whole array
  reverse(v.begin(),v.begin()+3); //reverse the first 3 elements

}
