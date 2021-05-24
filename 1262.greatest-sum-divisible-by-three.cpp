/*
 * @lc app=leetcode id=1262 lang=cpp
 *
 * [1262] Greatest Sum Divisible by Three
 */

// @lc code=start
class Solution
{
public:
    int maxSumDivThree(vector<int> &nums)
    {

        //Simple Solution
         int m1f=10001,m1s=10001,m2f=10001,m2s=10001;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(nums[i]%3==1){
                if(nums[i]<m1f){
                    m1s=m1f;
                    m1f=nums[i];

                }
                else if(nums[i]<m1s)m1s=nums[i];
            }
            else if(nums[i]%3==2){
                if (nums[i] < m2f)
                {
                    m2s = m2f;
                    m2f = nums[i];
                }
                else if (nums[i]<m2s)m2s=nums[i];
        
            }
        }
        if(sum%3==0) return sum;
        if(sum%3==1) return sum-min(m1f,m2f+m2s);
        return sum-min(m2f,m1f+m1s);
 



        //DP SOLution
      /*   vector<int> dp (3);
        for(int a:nums)
            for(int i: vector<int>(dp))
                dp[(i+a)%3]=max(dp[(i+a)%3],i+a);

                return dp[0];
             */
        


    }
};
// @lc code=end
