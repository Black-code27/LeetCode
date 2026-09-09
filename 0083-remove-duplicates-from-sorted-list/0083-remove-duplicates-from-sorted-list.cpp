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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* nextptr;
        while (temp != NULL && temp -> next != NULL){
            ListNode* nextptr = temp -> next;
            if(temp-> val == nextptr -> val)
            temp -> next = nextptr -> next;
            else 
            temp = temp -> next;
        }
        return head;
    } 
};