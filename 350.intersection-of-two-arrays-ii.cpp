/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() > nums2.size())
            return intersect(nums2, nums1);
            //This is Done to min the space complexity and takes one which less size

        vector<int> ret;
        unordered_map<int, int> m;
        for (auto &a : nums1)
        { //checking the occurance of elements in first array 
           //if element occur first time than its 1 nd if two time it show 2 
            m[a]++;
        }
        for (auto &a : nums2)
        {  
            //Finding the each element in another array its complexity is;
            // max O(m)O(n)
            if (m.find(a) != m.end() && m[a] > 0)
            {
                //if element find than add that element in ret vector <int>
                ret.push_back(a);
                m[a]--;
                //and decrease the occurance of eleemtn
            }
        }
        return ret;
    }
};
// @lc code=end
