/*
 * @lc app=leetcode id=1544 lang=cpp
 *
 * [1544] Make The String Great
 */

// @lc code=start
class Solution {
public:
    string makeGood(string s) {

        stack<char> st;
        for (int i = 0;i<s.size();i++){
            st.push(s[i]);
            while (!st.empty() && ((st.top()==s[i+1]+32) || (st.top()==s[i+1]-32))){
                st.pop();
                i++;
            }
        }
		string ret = "";
        while(!st.empty()){
            ret = st.top() + ret;
            st.pop();
        }
        return ret;
        
    }
};
// @lc code=end

