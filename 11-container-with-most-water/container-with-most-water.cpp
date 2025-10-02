class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = INT_MIN;

        int i = 0;
        int j = height.size() - 1;

        while(i < j)
        {
            int area = (j - i) * min(height[i], height[j]);
            result = max(result, area);

            if(height[i] < height[j]) i++;
            else j--;
        }


        return result;
    }
};