class Solution {
    static bool comp(vector<int>&a , vector<int>&b)
    {
        return a[1] < b[1];
    }
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);

        int last_end = INT_MIN;
        int times = 0;

        for(int i = 0; i < intervals.size(); i++)
        {
            if(intervals[i][0] < last_end)
            {
                times ++;
            }
            else
            {
                last_end = intervals[i][1];
            }
        }

        return times;
    }
};