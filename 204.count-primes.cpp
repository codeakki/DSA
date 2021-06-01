/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 */

// @lc code=start
class Solution
{
public:
    int countPrimes(int n)
    {
        if (n<=2) return 0;
      //vector of bool value to check prime numbers ;
        vector<bool> passed(n, false);
        int sum = 1;
        int upper = sqrt(n);
        for (int i=3; i<n; i+=2) {
            if (!passed[i]) {
                sum++;
                if (i>upper) continue;
                for (int j=i*i; j<n; j+=i) {
                    passed[j] = true;
                }
            }
        }
        return sum;
         
    }
};
// @lc code=end
