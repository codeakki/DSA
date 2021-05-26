/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {

        int tep=0;
        int low=0;
        int high=nums.size()-1;
        int mid=0;
        while(mid<=high) {
            /* Swapping of Elemetns */
            if(nums[mid]==0)
            {
                tep=nums[low];
                nums[low]=nums[mid];
                nums[mid]=tep;
                low++;mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            /* Swaping  */
            else if(nums[mid]==2){
                tep=nums[high];
                nums[high]=nums[mid];
                nums[mid]=tep;
                high--;
            }
        }
        
    }
};
// @lc code=end

