/*
 * @lc app=leetcode id=172 lang=cpp
 *
 * [172] Factorial Trailing Zeroes
 */

// @lc code=start
class Solution
{
public:
    int trailingZeroes(int n)
    {
        int result = 0;
        for (long long i = 5; n / i > 0; i *= 5)
        {
            result += (n / i);
        }
        return result
    }
};
// @lc code=end
