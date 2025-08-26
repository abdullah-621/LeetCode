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
    class Compare{
        public:
        bool operator()(ListNode* a, ListNode* b)
        {
            return a->val > b->val;
        } 
    };
    
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        vector<ListNode*>init;

        // check any non-null head 
        for(auto node : lists)
        {
            if(node) 
            {
                init.push_back(node);
            }
        }

        priority_queue<ListNode*, vector<ListNode*>, Compare> pq(init.begin(), init.end());

        ListNode* root = new ListNode(0); // dummy node
        ListNode* tail = root;

        ListNode* temp;


        while(!pq.empty())
        {
            temp = pq.top();
            pq.pop();

            tail->next = temp;
            tail = tail->next;

            if(temp->next)
            {
                pq.push(temp->next);
            }
        }

        return root->next;
    }
};
// class Solution {
// public:
//     void merge(vector<int>& ans, ListNode* head) {
//         if (head == nullptr)
//             return;
//         ListNode* temp = head;

//         while (temp != nullptr) {
//             ans.push_back(temp->val);
//             temp = temp->next;
//         }
//     }
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         vector<int> ans;

//         for (auto head : lists) {
//             merge(ans, head);
//         }

//         sort(ans.begin(), ans.end());

//         ListNode* head = new ListNode(0);
//         ListNode* curr = head;

//         for (int i : ans) {
//             ListNode* temp = new ListNode(i);
//             curr->next = temp;
//             curr = curr->next;
//         }

//         return head->next;
//     }
// };