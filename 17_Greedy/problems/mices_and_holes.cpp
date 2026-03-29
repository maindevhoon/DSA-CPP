//You are given positions of mice and holes on a line.
// Each mouse can move left or right, and each hole can hold only one mouse.

// 👉 The goal is to assign each mouse to a hole such that
// the maximum time taken by any mouse (distance to its hole) is minimized.

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
    
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