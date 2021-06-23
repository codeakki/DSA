/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        map<int, int> hash;
        for (auto num : nums)
            hash[num]++;

        for (auto iter = hash.begin(); iter != hash.end(); ++iter)
            if (iter->second > 1)
                return iter->first;
    return -1;
    }
};
// @lc code=end
