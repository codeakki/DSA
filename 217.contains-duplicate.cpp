/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, bool> myMap;
        //simply checking the other element in map if we find return true else return false;
        for (auto &num : nums)
        {
            if (myMap.find(num) != myMap.end())
                return true;
            else
                myMap[num] = true;
        }
        return false;
    }
};
// @lc code=end
