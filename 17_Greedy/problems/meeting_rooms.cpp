#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        vector<pair<int,int>>ender;
        for (int i=0; i<end.size();i++){
            ender.push_back({end[i],i});
        }
        sort(ender.begin(),ender.end());
        int total = 0;
        int last_ended = -1;
        for (int i=0; i<ender.size(); i++){
            if(last_ended < start[ender[i].second]){
                total++;
                last_ended = ender[i].first;
            }
        }
        return total;
    }
};