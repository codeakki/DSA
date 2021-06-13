/*
 * @lc app=leetcode id=1720 lang=cpp
 *
 * [1720] Decode XORed Array
 */

// @lc code=start
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
         
         vector<int> res={first};
         for( auto & a: encoded)
         {
             res.push_back(first^=a);
         }
         return res;
    }
};
// @lc code=end

