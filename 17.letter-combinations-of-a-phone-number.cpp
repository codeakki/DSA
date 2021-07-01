/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution
{
public:
    const vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"};
    vector<string> letterCombinations(string digits)
    {
        if (digits.empty()) return {};
        vector<string> result;
        result.push_back("");
        for(auto digit : digits){
            vector<string>tmp;
            for(auto candidate :pad[digit-'0']){
                for(auto s: result){
                    tmp.push_back(s+candidate);
                }
            }
            result.swap(tmp);
        }
        return result;
    }
};
// @lc code=end
