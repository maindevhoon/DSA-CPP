// find min and max amount to spend in candy shop to secure all candies k is the amount of candies you get free for each buy.
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        int n = prices.size();
        sort(prices.begin(),prices.end());
        int i,j;
        i = 0;
        j = n-1;
        int min_amount = 0;
        int max_amount = 0;
        while(i<=j){
            min_amount += prices[i];
            i++;
            j-=k;
        }
        i = n-1;
        j = 0;
        while(i>=j){
            max_amount += prices[i];
            i--;
            j+=k;
        }
        vector<int>sol={min_amount,max_amount};
        return sol;
    }
};