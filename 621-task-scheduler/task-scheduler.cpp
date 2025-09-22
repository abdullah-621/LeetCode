class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        // count freq of all char
        vector<int>freq(26,0);
        // calculate higest freq
        int count = 0;

        for(int i = 0; i < tasks.size(); i++)
        {
            freq[tasks[i] - 'A']++;
            count = max(count , freq[tasks[i] - 'A']);
        }

        int ans = (count - 1) * (n + 1);

        for(int i = 0; i < 26; i++)
        {
            if(freq[i] == count)
            {
                ans++;
            }
        }

        return ans > tasks.size() ? ans : tasks.size();
    }
};