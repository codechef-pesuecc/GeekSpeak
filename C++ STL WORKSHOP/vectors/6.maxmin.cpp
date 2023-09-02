/*
  CODECHEF - PESUECC
*/

#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v;

  v.push_back(30);
  v.push_back(10);
  v.push_back(50);
  v.push_back(40);
  v.push_back(20);

  cout<<"The vector is:\n";

  for(int i=0;i<5;i++)
    cout<<v[i]<<' ';

  cout<<endl;

  int max = *max_element(v.begin(),v.end());
  int min = *min_element(v.begin(),v.end());

  cout<<"The max element is :"<<max<<endl;
  cout<<"The min element is :"<<min<<endl;

}
