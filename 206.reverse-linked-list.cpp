/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
    ListNode* reverseList(ListNode* head) {
        ListNode* pre =NULL;  //pre point to Null
        ListNode* next =NULL; //next also point to Null
        while(head!=NULL){  //while head is not null 
            next=head->next;    
            head->next=pre;//Now head-> next equal to NUll
            pre =head;    //pre point to head 
            head=next;    //head point to next 
        }
        return pre;
    }

    //EXAMPLE Linked List ----------------------------------------------------------------
    //  2-->4-->6-->8-->1
    // next = 4
    //  4=NULL
    // pre =2
    //head = 4
    // Process continue till head not become NULL
};
// @lc code=end

