/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int water=0;
        int ans=0;
            int i=0,j=height.size()-1;
            while(i<j){
                ans=max(ans,(j-i)*min(height[i],height[j]));
                height[i]>height[j]?j--:i++;
            }
            return ans;
        
    }
};
// @lc code=end

