#include <bits/stdc++.h>
using namespace std;

// Given a list of coins, you must remove exactly one coin. Find the maximum value X such that every amount from 1 to X can be formed using the remaining coins.

// Core greedy: Sort coins. If current reach is r and next coin c ≤ r+1, extend reach to r+c. Otherwise there's a gap — stop.
// Brute-force over removals: Try skipping each coin once, compute reach for that subset, return the best.

int max_amount (vector<int>&v){
    sort(v.begin(),v.end());
    int reach = 0;
    for (int i = 0; i<v.size(); i++){
        if (v[i] <= reach+1){
            reach += v[i];
        }
    }
    return reach;
}

int max_after_each_removal(vector<int>&v){
    int max_amt = 0;
    for (int i = 0; i<v.size(); i++){
        vector<int> temp = v;
        temp.erase(temp.begin()+i);
        max_amt = max(max_amt,max_amount(temp));
    }
    return max_amt;
}


int main(){
    vector<int> v= {1,2,2,5};
    cout << max_after_each_removal(v);
}