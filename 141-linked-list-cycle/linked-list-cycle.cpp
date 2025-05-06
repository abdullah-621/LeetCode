/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {   // Floyd's Cycle Detection Algorithm

        ListNode *first = head;
        ListNode *slow = head;

        while(first != nullptr && first->next != nullptr){

            first = first->next->next;
            slow = slow->next;

            if(first == slow){
                return true;
            }
        }

        return false;

    }
};