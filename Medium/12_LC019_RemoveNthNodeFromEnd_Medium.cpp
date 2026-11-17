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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *current = head, *follow = head; 

        int step = 0; 
        while (current->next != nullptr) 
        {
            if (step >= n) follow = follow->next; 
            current = current->next; 
            step++; 
        } 
        if (step < n) head = head->next; 
        else if (follow->next != nullptr) follow->next = follow->next->next; 

        return head; 
    }
};