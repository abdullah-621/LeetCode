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
        if(!head || !head->next){
            return head;
        }
        
        ListNode *curr = head->next;
        ListNode *pre = head;
        while(curr != nullptr){
            if(pre->val == curr->val){
                pre->next = curr->next;
                ListNode *del = curr;
                curr = curr->next;
                delete del;
            }
            else{
                pre = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};