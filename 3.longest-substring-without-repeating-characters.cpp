/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_set<char> set;
        int i = 0;
        int j = 0;
        int n = s.size();
        int ans = 0;
        while (i < n && j < n)
        {
            if (set.find(s[j]) == set.end()) //Agar character nhi mile in given unordered set
            {
                set.insert(s[j++]);    ///Element ko daalo nd increament the counter
                ans = max(ans,j - i); //check if new distance is longere than current
            }
            else
            {
                set.erase(s[i++]);
                /* IF character doest not exist in the set i.e it is reperater caharacter */
            }
        }
        return ans;
    }
};
// @lc code=end
