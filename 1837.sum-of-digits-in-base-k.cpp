/*
 * @lc app=leetcode id=1837 lang=cpp
 *
 * [1837] Sum of Digits in Base K
 */

// @lc code=start
class Solution {
public:
    int sumBase(int n, int k) {
        int res=0;
        while(n!=0){
            res+=n%k;
            n=n/k;
        }
        return res;
        
    }
};
// @lc code=end

