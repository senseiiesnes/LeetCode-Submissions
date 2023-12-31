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
    
    ListNode* recursiveReverse(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        ListNode* newHead = recursiveReverse(head->next);
        ListNode* front = head->next;
        head->next = NULL;
        front->next = head;
        return newHead;
    }
    
    ListNode* reverseList(ListNode* head) {
        
//                 Iterative Approach
        
        // ListNode* temp = head;
        // ListNode* prev = NULL;
        // while(temp != NULL){
        //     ListNode* front = temp->next;
        //     temp->next = prev;
        //     prev = temp;
        //     temp = front;
        // }
        // return prev;
        
//                 Recursive Approach
        return recursiveReverse(head);
    }
};