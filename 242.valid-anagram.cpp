/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length()) return false;
        // If length are not equal than they are not isAnagram
         int n=s.length();
         int counts[26]={0};  // as it contains only lower cases value
         for (int i=0;i<n;i++) {
             counts[s[i]-'a']++;  //count occurance f element 
             counts[t[i]-'a']--;  //deduct occurance f element from previous
         }
          for (int i = 0; i < 26; i++)
            if (counts[i]) return false;  //if anyvalue find that its not angram
        return true;
    }
};
// @lc code=end
