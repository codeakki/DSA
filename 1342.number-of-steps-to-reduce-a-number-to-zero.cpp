/*
 * @lc app=leetcode id=1342 lang=cpp
 *
 * [1342] Number of Steps to Reduce a Number to Zero
 */

// @lc code=start
class Solution {
public:
    int numberOfSteps (int num) {
        return num ? 31 - __builtin_clz(num) + __builtin_popcount(num) : 0;
    }
};
// @lc code=end

