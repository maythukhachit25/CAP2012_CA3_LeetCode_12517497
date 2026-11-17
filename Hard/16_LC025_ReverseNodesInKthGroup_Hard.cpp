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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head; 

        ListNode dum(0, head); 
        ListNode* prevGP = &dum; 

        while (true) 
        {
            ListNode* kth = prevGP; 
            for (int i = 0; i < k && kth; i++) 
            {
                kth = kth->next; 
            } 
            if (!kth) break; 

            ListNode* next_group = kth->next; 
            ListNode* prev = kth->next; 
            ListNode* curr = prevGP->next; 
            while (curr != next_group) 
            {
                ListNode* temp = curr->next; 
                curr->next = prev;  
                prev = curr; 
                curr = temp; 
            } 

            ListNode* temp = prevGP->next; 
            prevGP->next = kth; 
            prevGP = temp; 
        } 

        return dum.next; 
    }
};