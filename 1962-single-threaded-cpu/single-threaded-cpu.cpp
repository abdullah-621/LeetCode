class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<int>ans;

        int n = tasks.size();

        for(int i = 0; i < n; i++)
        {
            tasks[i].push_back(i);
        }

        sort(tasks.begin(), tasks.end());

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;

        int i = 0;
        long long timer = tasks[0][0];


        while(i < n || !pq.empty())
        {
            // push all the task into mean heap whose enqueue time is equql and less then timer
            while(i < n && tasks[i][0] <= timer)
            {
                pq.push({tasks[i][1], tasks[i][2]});
                i++;
            }
            // if heap is empty then timer start with the next time
            if(pq.empty())
            {
                timer = tasks[i][0];
            }
            // if heap not empty
            else
            {
                ans.push_back(pq.top().second);
                timer += pq.top().first;
                pq.pop();
            }
        }

        return ans;
    }
};