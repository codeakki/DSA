/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */

// @lc code=start
class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        return (n > 0) && ((int)(pow(3, 19)) % n == 0);
    }
};
// @lc code=end
