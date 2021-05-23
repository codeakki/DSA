/*
 * @lc app=leetcode id=123 lang=cpp
 *
 * [123] Best Time to Buy and Sell Stock III
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int fbuy = INT_MIN;
        int secondbuuy = INT_MIN;
        int fsale = 0;
        int ssale = 0;
        for (int i = 0; i < prices.size(); i++) //the more money left, the happier you will be
        {
            fbuy = max(fbuy, -prices[i]);                    //left money after buy1
            fsale = max(fsale, prices[i] + fbuy);            //left money after sale1
            secondbuuy = max(secondbuuy, fsale - prices[i]); //left money after buy2
            ssale = max(ssale, prices[i] + secondbuuy);      //left money after sale2
        }
        return ssale;
    }
};
// @lc code=end
