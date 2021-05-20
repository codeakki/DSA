/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
     {

     stack<char> st;
    map<char,char> m;
    m.insert(pair<char,char>('(',')'));
    m.insert(pair<char,char>('{','}'));
    m.insert(pair<char,char>('[',']'));
    
    for (auto x:s)
    {
        if(x == '(' || x == '{' || x == '[')
            st.push(x);
        else
        {
            if(st.empty())
                return false;
            if( m[st.top()]==x)
                st.pop();
            else
                return false;
        }
    }
    return st.empty();
    }

};
// @lc code=end
