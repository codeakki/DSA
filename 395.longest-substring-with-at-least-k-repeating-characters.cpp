/*
 * @lc app=leetcode id=395 lang=cpp
 *
 * [395] Longest Substring with At Least K Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int longestSubstring(string s, int k) {
        if(s.size()==0 || k>s.size()) return 0;
        if (k==0) return s.size();
        unordered_map<char,int >map;
        for(int i=0; i<s.size();i++){
            map[s[i]]++;
        }
        int idx = 0;
        while(idx<s.size() && map[s[idx]]>=k){
            idx++;
        }
        if(idx==s.size()) return s.size();
        int left = longestSubstring(s.substr(0 , idx) , k);
        int right = longestSubstring(s.substr(idx+1) , k);
        
        return max(left, right);
    }
};
// @lc code=end

