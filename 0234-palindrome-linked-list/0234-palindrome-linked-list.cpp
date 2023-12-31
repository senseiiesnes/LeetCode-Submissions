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
    
    ListNode *findMiddle(ListNode *head) {
        ListNode *fast = head, *slow = head;
        while(fast->next && fast->next->next){
            slow = slow->next, fast = fast->next->next;
        }
        return slow;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode *newHead = recursiveReverse(findMiddle(head)->next);
        ListNode *first = head, *second = newHead;
        while(second){
            if(second->val != first->val){
                recursiveReverse(newHead);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        recursiveReverse(newHead);
        return true;
    }
};