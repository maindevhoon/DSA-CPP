// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // The shorter wall is limiting water. Remove it and hope for a taller one.”
    int maxArea(vector<int>& height) {
        if(height.empty()){return 0;}
        int l = 0;
        int r = height.size()-1;
        int area = 0;
        while(l<r){
            if ((r-l)*min(height[l],height[r]) > area){
                area = (r-l)*min(height[l],height[r]);
            }
            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return area;
    }
};
