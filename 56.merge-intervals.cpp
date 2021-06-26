/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      if(intervals.empty()) return {};
        std::sort(intervals.begin(), intervals.end(), 
                  [](const vector<int> &a, const vector<int> &b) {return a[0] < b[0];});
        
        vector<vector<int>> res;
        for(const auto& interval : intervals) {
            if(res.empty() || interval[0] > res.back().back())
                res.push_back(interval);
            else
                res.back().back() = std::max(res.back().back(), interval[1]);
        }
        return res;  
    }
};
// @lc code=end

