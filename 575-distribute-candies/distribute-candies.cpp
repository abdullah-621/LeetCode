class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int eat = n / 2;
        unordered_map<int,int>ump;

        for(int i : candyType){
            ump[i]++;
        }

        int count = ump.size();

        if(count <= eat) return count;
        else return n - eat;
    }
};