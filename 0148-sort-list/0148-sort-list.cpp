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
    ListNode* middle(ListNode* head){
        ListNode *fast = head->next, *slow = head;
        while(fast && fast->next){
            slow = slow->next, fast = fast->next->next;
        }
        return slow;
    }
    
    ListNode* merge(ListNode* first, ListNode* second){
        ListNode *a = first;
        ListNode *b = second;
        ListNode *dummy = new ListNode(-1);
        ListNode *temp = dummy;
        while(a && b){
            if(a->val < b->val){
                temp->next = a;
                a = a->next;
            }
            else{
                temp->next = b;
                b = b->next;
            }
            temp = temp->next;
        }
        if(a) temp->next = a;
        else temp->next = b;
        return dummy->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* middleNode = middle(head);
        ListNode* leftNode = head;
        ListNode* rightNode = middleNode->next;
        middleNode->next = nullptr;
        leftNode = sortList(leftNode);
        rightNode = sortList(rightNode);
        return merge(leftNode, rightNode);
    }
};