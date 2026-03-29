#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        vector<int>sol = {0,0};
        vector<bool>taken (prices.size(),0);
        vector<bool>taken2(prices.size(),0);
        sort(prices.begin(),prices.end());
        int size_available = prices.size();
        // 1 3 4 5 k = 2
        int choice = 0;
        while(size_available > 0 && choice < size_available){
            sol[0] += prices[choice];
            taken[choice] = 1;
            choice++;
            for(int i = 0; i< k; i++){
                
                if(taken[size_available-1-i] != 1) {
                    taken[size_available-1-i] = 1;
                }
            }
            size_available -= k;
        }
        sort(prices.begin(),prices.end(), greater<int>());
        int size_available2 = prices.size();
        // 1 3 4 5 k = 2
        int choice2 = 0;
        while(size_available2 > 0 && choice2 < size_available2){
            sol[1] += prices[choice2];
            taken2[choice2] = 1;
            choice2++;
            for(int i = 0; i< k; i++){
                
                if(taken2[size_available2-1-i] != 1) {
                    taken2[size_available2-1-i] = 1;
                }
            }
            size_available2 -= k;
        }

        return sol;
    }
};

int main(){
    vector<int> prices = {8,18, 18, 12, 13};
    Solution s;
    vector<int> sol = s.minMaxCandy(prices,3);
    for (auto x : sol){
        cout << x << " ";
    }
}