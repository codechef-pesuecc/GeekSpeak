/*
    CODECHEF - PESUECC

    You have some integers which originally contained all the numbers from 1 to n. 
    Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set.
    This results in repetition of one number and loss of another number.
    Find the number that occurs twice and the number that is missing.

    Input: nums = [1,2,2,4] 
    Output: [2,3]

    Input: nums = [1,1]
    Output: [1,2] 

    Constraints:
        2 <= nums.length <= 10^4
        1 <= nums[i] <= 10^4
    
*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> nums {1,2,2,4};
    // TODO 
    int n = nums.size(); 
    int a = accumulate(nums.begin(), nums.end(), 0); 
    set<int>s = {nums.begin(), nums.end()}; 
    int b = accumulate(s.begin(), s.end(), 0); 
    int sum = n*(n+1)/2; 
    cout<<"{ "<<a - b << ", "<< sum - b << " }"; 
}