/*
 * @lc app=leetcode id=997 lang=cpp
 *
 * [997] Find the Town Judge
 */

// @lc code=start
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> degree(N+1,0);
        for(auto people : trust) 
        {
            degree[people[0]]--;
            degree[people[1]]++;
        }
        
        for(int i=1; i<=N; i++) 
        {
            if(degree[i] == N-1)
            {
                return i; 
            }
        }
        
        return -1;
    }
};
// @lc code=end

