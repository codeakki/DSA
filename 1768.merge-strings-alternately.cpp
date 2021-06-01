/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int i = 0, j = 0;
        string res;
        while (i < word1.size() && j < word2.size())
            res += string() + word1[i++] + word2[j++];
        return res + word1.substr(i) + word2.substr(j);
    }
};
// @lc code=end
