/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> record(nums.begin(), nums.end());
        int res=1;
        if(nums.size()==0) return 0;
        for(int n:nums)
        {
            int prev=n-1,next=n+1;
            while(record.find(prev)!=record.end()) record.erase(prev--);
            while(record.find(next)!=record.end()) record.erase(next++);
            res=max(res,next-prev-1); 

        }
        return res;
        
    }
};
// @lc code=end

