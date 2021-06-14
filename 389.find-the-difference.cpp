/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
       char r=0;
       for(char c:s){
           r ^=c;
       } 
       for(char c:t){
           r ^=c;
       }
       return r;
    }
};
// @lc code=end

