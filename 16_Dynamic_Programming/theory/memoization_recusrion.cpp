#include <bits/stdc++.h>
using namespace std;

// memoization method -- top down method
// TC = O(n)
// SC = O(n)
int fib(int n, vector<int> &dp)
{
    if(n<=1 ) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fib(n-1,dp) + fib(n-2,dp);
}
int main() {
    int n; 
    cin >> n;
    vector<int> dp (n+1,-1);
    fib(n,dp);
    cout << fib(n,dp);
    return 0;
}