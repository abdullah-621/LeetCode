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
    int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;

        ListNode *prev = head;
        ListNode *curr = prev->next;

        while(prev->next != nullptr || curr != nullptr){

        int value = gcd(prev->val, curr->val);

        ListNode *temp = new ListNode(value);
        temp->next = curr;
        prev->next = temp;
        prev = curr;
        curr = curr->next;
        }

        return head;
    }
};