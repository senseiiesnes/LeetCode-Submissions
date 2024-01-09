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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        int cnt = 1;
        ListNode *temp = head;
        while(temp->next){
             temp = temp->next;
             cnt++;
        }
        k = k % cnt;
        int diff = cnt - k;
        temp->next = head;
        while(diff--){
             temp = temp->next;
        }
        ListNode *delNode = temp->next;
        temp->next = NULL;
        return delNode;
    }
};