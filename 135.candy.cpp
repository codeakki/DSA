/*
 * @lc app=leetcode id=135 lang=cpp
 *
 * [135] Candy
 */

// @lc code=start
class Solution {
public:
    int candy(vector<int>& ratings) {

        int len=ratings.size(),res=0,i;
        if(len>0){
            vector<int> number(len,0); //To save the number of candies from child
            number[0]=1;
          //forwarad scan to calculate number of candy needed to make sure it has more candies than left if it has higher rated,otherwise give one candy to it
         for(i=1;i<len;++i)
         {
                number[i]=ratings[i]>ratings[i-1]?number[i-1]+1:1;
         }
         //Backward scan to calculate make sure child i has more candies than its right neighboor if it has higher rate pick the bigger one from forwatrd and backward scans as the final number for child i 
           for(i=len-2,res=number[len-1];i>=0;--i){
               if((ratings[i]>ratings[i+1]) && number[i]<number[i+1]+1)
                 number[i]=number[i+1]+1; 

              res+=number[i];   
           }
        }
        return res;
        
    }
};
// @lc code=end

