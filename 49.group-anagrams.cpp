/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string s: strs){
            string t=s;
            sort(t.begin(),t.end());
            mp[t].push_back(s);
        }
        vector<vector<string>>Anagrams;
        for(auto p:mp){
            Anagrams.push_back(p.second);
        }
        return Anagrams;
        
    }
};
// @lc code=end

