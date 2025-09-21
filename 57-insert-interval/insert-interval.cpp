class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;

        int i = 0, n = intervals.size();

        // push all the unoverlaping intervals
        while(i < n && intervals[i][1] < newInterval[0])
        {
            ans.push_back(intervals[i]);
            i++;
        }

        // if intervals will finished then push the newintervals into ans

        if(i == n)
        {
            ans.push_back(newInterval);
            return ans;
        }

        // if newintervals starts with overlaping

        while(i < n && newInterval[1] >= intervals[i][0])
        {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }

        // push the newInterval into ans

        ans.push_back(newInterval);


        // if any intervealse remain into intervals
        while(i < n)
        {
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;

    }
};