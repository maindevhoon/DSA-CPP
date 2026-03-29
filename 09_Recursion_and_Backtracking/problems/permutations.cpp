#include <bits/stdc++.h>
using namespace std;

class optimal {
public:
    void helper(vector<int>& nums, vector<int>& freq, vector<int>& ds, vector<vector<int>>& ans) {
        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < (int)nums.size(); i++) {
            if (!freq[i]) {
                freq[i] = 1;
                ds.push_back(nums[i]);
                helper(nums, freq, ds, ans);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        vector<int> freq(nums.size(), 0); 
        helper(nums, freq, ds, ans);  
        return ans;
    }
};

int main() {
    optimal o;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = o.permute(nums);
    for (auto x : ans) {
        for (auto y : x) cout << y << " ";
        cout << "\t";
    }
}