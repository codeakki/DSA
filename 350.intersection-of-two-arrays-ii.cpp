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
        /* if (nums1.size() > nums2.size())
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
                //and decrease the occurance of element

            }
        }
        return ret; */

        vector<int> res;

        // if the arrays are sorted
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        //if nums1's size is small compared to nums2's size? Which algorithm is better?
        //binary search
        vector<int> shorter, longer;

        if (nums1.size() <= nums2.size())
        {
            shorter = nums1;
            longer = nums2;
        }
        else
        {
            shorter = nums2;
            longer = nums1;
        }

        int leftInd = 0;
        int rightInd = longer.size() - 1;
        int ind;

        for (int i = 0; i < shorter.size(); ++i)
        {
            ind = binarySearch(longer, leftInd, rightInd, shorter[i]);
            if (ind != -1)
            {
                res.push_back(shorter[i]);
                leftInd = ind + 1;
            }
        }

        return res;
    }

    int binarySearch(vector<int> &nums, int start, int end, int target)
    {
        //int start = 0, end = nums.size() - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                while (mid > start && nums[mid - 1] == target)
                    --mid;
                return mid;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return -1;
    }
};
// @lc code=end
