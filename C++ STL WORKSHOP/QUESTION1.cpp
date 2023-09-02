/*
  CODECHEF - PESUECC

  Problem Statement:
  Given a string s, reverse only all the vowels in the string and return it.

  The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

  Example 1:
  Input: s = "hello"
  Output: "holle"

  Example 2:
  Input: s = "leetcode"
  Output: "leotcede"

*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
  string s;
  cin>>s;
  stack<char> st;
        //hello
        // stack -> e, o; 
        // holle
  for(int i=0;i<s.size();i++){
    if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i]=='I' || s[i] == 'O' || s[i]=='U'){
        st.push(s[i]);
      }
    }
  for(int i=0;i<s.size();i++){
    if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i]=='I' || s[i] == 'O' || s[i]=='U'){
        s[i] = st.top();
        st.pop();
      }
    }
  cout<<s<<endl;
  
}
