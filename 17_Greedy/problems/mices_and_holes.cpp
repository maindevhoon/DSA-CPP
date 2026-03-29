#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        // code here
        sort(mices.begin(),mices.end());
        sort(holes.begin(),holes.end());
        int max_sol = 0;
        for (int i = 0; i < mices.size(); i++){
            if (abs(holes[i]-mices[i])>max_sol) {
                max_sol = abs(holes[i]-mices[i]);
            }
        }
        return max_sol;
    }
};

int main(){
    Solution s;
    vector<int> a = {1,2,3};
    vector<int> b = {2,3,4};

    int sol = s.assignHole(a, b);
    cout << sol;
}