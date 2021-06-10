/*
 * @lc app=leetcode id=1047 lang=cpp
 *
 * [1047] Remove All Adjacent Duplicates In String
 */

// @lc code=start
class Solution {
public:
    string removeDuplicates(string s) {

        string res=""; // as an stack variable and insert variable if its not equal to
        //upper variable of stack and check if it is equal of not and perform operation 
        for(char & c:s){
            if(res.size() && c==res.back())
            res.pop_back();
            else
            res.push_back(c);
        }
        return res;
        
    }
};
// @lc code=end

