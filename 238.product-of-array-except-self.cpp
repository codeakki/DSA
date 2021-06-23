/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int fromBegin =1;
        int fromEnd =1;
        vector<int>res(n,1);
        for(int i=0;i<n;i++){
            res[i] *= fromBegin;
            fromBegin*=nums[i];
            res[n-1-i]*=fromEnd;
            fromEnd*=nums[n-1-i];
        }
        return res;
       
        
    }
};
// @lc code=end

