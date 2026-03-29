// Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.


#include <bits/stdc++.h>
using namespace std;


//brute
class brute {
public:
    void helper(set<vector<int>>&sol,vector<int>&nums,vector<int>temp,int i){
        if(i>=nums.size()){
            sort(temp.begin(),temp.end());
            sol.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        helper(sol,nums,temp,i+1);
        temp.pop_back();
        helper(sol,nums,temp,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>sol;
        vector<int>temp;
        helper(sol,nums,temp,0);
        vector<vector<int>>v_sol;
        for(auto x:sol){
            v_sol.push_back(x);
        }
        return v_sol;
    }
};


class optimal{
    public:
    vector<vector<int>> subsets(vector<int>&nums, vector<int>ds,vector<vector<int>>&ans, int idx){
        ans.push_back(ds);
        for ( int i = idx; i < nums.size();i++){
            if((i!=idx && nums[i] == nums[i-1])) continue;
            ds.push_back(nums[i]);
            subsets(nums,ds,ans,idx+1);
            ds.pop_back();
        }
        

    }

    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(), nums.end());
        subsets(nums,ds,ans,0);
        return ans;

    }

};