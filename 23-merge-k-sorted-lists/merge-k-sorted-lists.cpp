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
    void merge(vector<int>&ans, ListNode* head){
        if(head == nullptr) return;
        ListNode *temp = head;

        while(temp != nullptr){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ans;

        for(auto head : lists)
        {
        merge(ans,head);
        }

        sort(ans.begin(),ans.end());

        ListNode *head = new ListNode(0);
        ListNode *curr = head;

        for(int i : ans){
            ListNode *temp = new ListNode(i);
            curr->next = temp;
            curr = curr->next;
        }

        return head->next;


    }
};