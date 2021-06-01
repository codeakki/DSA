/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int> m;
        for (auto &c : s)
        {
            m[c]++;
            //adding number of occurences in hash table
        }
        for (int i = 0; i < s.size(); i++)
        { //checking the first appearance of unique number in hash table 
            if (m[s[i]] == 1)
                return i;
        }
        return -1;
    }
};
// @lc code=end
