/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        unsigned long long s = 0, e = x;
        unsigned long long m = 0;
        
        while (s < e) {
            m = s + (e-s)/2;

            if (m*m == x)
                return m;
            else if (m*m < x)
                s = m+1;
            else
                e = m;
        }
        
        return s*s > x ? s-1 : s;
        
    }
};
// @lc code=end

