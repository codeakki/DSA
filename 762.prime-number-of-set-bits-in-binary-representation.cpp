/*
 * @lc app=leetcode id=762 lang=cpp
 *
 * [762] Prime Number of Set Bits in Binary Representation
 */

// @lc code=start
class Solution {
public:
  int countPrimeSetBits(int L, int R) {
    int ans = 0;
    unsigned magic = 2693408941;
    for (int n = L; n <= R; ++n)
      if (magic & (1 << __builtin_popcountll(n))) ++ans;
    return ans;
  }
};
// @lc code=end

