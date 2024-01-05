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
    
    ListNode* reverseLL(ListNode *head)
    {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp != NULL) {
            ListNode* front = temp->next; 
            temp->next = prev; 
            prev = temp; 
            temp = front; 
        }
        return prev; 
    }
    
    ListNode* getKthNode(ListNode* temp, int k) {
       k -= 1; 
       while(temp != NULL && k > 0) {
           k--;
           temp = temp->next; 
       }
       return temp; 
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next) return head;
        ListNode* temp = head;
        ListNode* back = NULL;
        while(temp){
            ListNode* kthNode = getKthNode(temp, k);
            if(!kthNode){
                if(back) back->next = temp;
                break;
            }
            ListNode* front = kthNode->next;
            kthNode->next = NULL;
            reverseLL(temp);
            if(temp == head){
                head = kthNode;
            }else{
                back->next = kthNode;
            }
            back = temp;
            temp = front;
        }
        return head; 
    }
};