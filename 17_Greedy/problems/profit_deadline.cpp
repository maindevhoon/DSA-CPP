// You are given two arrays: deadline[], and profit[], which represent a set of jobs, where each job is associated with a deadline, and a profit. Each job takes 1 unit of time to complete, and only one job can be scheduled at a time. You will earn the profit associated with a job only if it is completed by its deadline.

// Your task is to find:

// The maximum number of jobs that can be completed within their deadlines.
// The total maximum profit earned by completing those jobs.

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        // code here
        vector<pair<int,int>> v;
        for (int i =0 ; i< profit.size(); i++){
            v.push_back({profit[i],i});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        int m = *max_element(deadline.begin(),deadline.end());
        int total = 0;
        int count = 0;
        vector<bool>avail(m,1);
        
        for (int i =0 ; i<v.size(); i++){
            for (int j = deadline[v[i].second]-1; j >= 0; j--){
                if (avail[j]==1){
                    avail[j]=0;
                    count++;
                    total += profit[v[i].second];
                    break;
                }
            } 
        }
        vector<int>sequence = {count,total};
        return sequence;
    }
};

int main(){
    Solution s;
    vector<int> deadline = {4, 1, 1, 1};
    vector<int> profit = {20, 10, 40, 30};

    vector<int> v = s.jobSequencing(deadline,profit);
    for (auto x : v){
        cout << x << " ";
    }
}