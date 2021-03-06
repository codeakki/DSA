/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        /* unordered_map<int, int> counter;
        for (int num : nums)
        {
            if (++counter[num] > nums.size() / 2)
            {
                return num;
            }
        }
        return 0; */

         int majority = 0;
         for (unsigned int i = 0, mask = 1; i < 32; i++, mask <<= 1) {
            int bits = 0;
            for (int num : nums) {
                if (num & mask) {
                    bits++;
                }
            }
            if (bits > nums.size() / 2) {
                majority |= mask;
            }
        }
        return majority;
    }
};
// @lc code=end
