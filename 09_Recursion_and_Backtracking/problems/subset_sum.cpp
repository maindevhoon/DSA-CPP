// Given an array nums of n integers. Return array of sum of all subsets of the array nums.

//Output can be returned in any order.

// Example 1

// Input : nums = [2, 3]

// Output : [0, 2, 3, 5]

// Explanation :
// When no elements is taken then Sum = 0.
// When only 2 is taken then Sum = 2.
// When only 3 is taken then Sum = 3.
// When element 2 and 3 are taken then sum = 2+3 = 5.

#include <bits/stdc++.h>
using namespace std;

void helper(vector<int>&nums,vector<int>&sums, int i, int s){
    if(i >= nums.size()){
        sums.push_back(s);
        return;
    }

    //pick
    s +=nums[i];
    helper(nums,sums,i+1,s);
    s-=nums[i];
    //not pick
    helper(nums,sums,i+1,s);
}   

int main(){
    //brute -> power set 2^n * n (uses bit manupulation to generate all subsets)
    

    //optimal ->  (indexes) either select or dont select 0/1 recursively
    vector<int> nums = {1,2,3};
    vector<int> sums;
    helper(nums,sums,0,0);
    for (auto x : sums){
        cout << x << " ";
    }
    cout << endl;

}