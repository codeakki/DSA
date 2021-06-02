/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
         long n = nums.size();
    return n * (n+1) / 2 - accumulate(begin(nums), end(nums), 0);
    }
};
// @lc code=end

