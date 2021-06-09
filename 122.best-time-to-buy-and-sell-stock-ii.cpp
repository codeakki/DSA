/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() <= 1)
            return 0;

        int res = 0;

        for (size_t i = 1; i < prices.size(); i++)
            if (prices[i] - prices[i - 1] > 0)
                res += prices[i] - prices[i - 1];

        return res;
    }
};
// @lc code=end
