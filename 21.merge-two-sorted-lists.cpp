/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy (INT_MIN);
        ListNode *tail=&dummy;
        // Created a dummy Linked list with tail as pointer to head
        while(l1 && l2)
        {  //while l1 and l2 are not empty
            //if l1 valude is less than l2 value 
            if(l1->val<l2->val){
                //make tail point to l1 value nd increase the list1 pointer 
                tail->next=l1;
                l1=l1->next;
            }
            else{
                tail->next=l2;
                l2=l2->next;
            }
            //increase the head pointer of dummy linked list
            tail=tail->next;
        }
        tail->next=l1?l1:l2;
        return dummy.next;
        
    }
};
// @lc code=end

