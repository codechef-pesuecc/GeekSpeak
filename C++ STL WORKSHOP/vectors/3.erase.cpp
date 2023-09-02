/*
  CODECHEF - PESUECC
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v;
  for(int i=1;i<=10;i++)
    v.push_back(i);
    
  v.erase(v.begin(),v.begin()+3); // erase first 3 elements;
  v.erase(v.begin()+5); //erase element no.6 

}
