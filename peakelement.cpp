class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak=0;
        int mi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]>mi){
               mi=nums[i];
               peak=i;
           }
        }
      //cout<<peak+1;
        return peak;
        
    }
};