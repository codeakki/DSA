/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0;
        int j = 1;
        int n = nums.size();
        while (i < n && j < n)
        {
            if (nums[i] == 0)
            {
                if (nums[j] == 0)
                {
                    j++;
                    continue;
                }
                nums[i] = nums[j];
                nums[j] = 0;
            }
            i++;
            j++;
        }
    }
};
// @lc code=end
