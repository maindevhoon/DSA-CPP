// this problem has greedy breaking test cases

//You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

// Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

// You may assume that you have an infinite number of each kind of coin.
#include <bits/stdc++.h>
using namespace std;

    
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end(),greater<int>());
        int choice = 0;
        int count = 0;
        while(amount != 0){
            for (choice = 0; choice < coins.size(); choice++){
                if(amount == 0){
                    break;
                }
                if(amount / coins[choice] >= 1 ){
                    int k = amount / coins[choice];
                    amount -= k*coins[choice];
                    count += k;
                }
            }
            if(choice>= coins.size() && amount != 0) return -1;
            
        }
        return count;
    }
};