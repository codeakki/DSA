/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=INT_MIN;
        if (nums.empty()) return 0;
        int mul=1;
        int mini=1;
        for(int i=0; i<nums.size();i++){
            if(nums[i]<0){
                swap(mul,mini);
            }
            mul=max(nums[i],mul*nums[i]);
            mini=min(nums[i],mini*nums[i]);
            ans=max(ans,mul);
        }
        return ans;
        
    }
};
// @lc code=end

