class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>m;

        for(int i = 0 ; i < list1.size(); i++){
            m[list1[i]] = i;
        }

        int idx = list2.size();
        
        int minsum = INT_MAX;
        vector<string>str;

        for(int i = 0 ; i < list2.size(); i++){

            auto it = m.find(list2[i]);
            if(it != m.end()){
        
                int sum = i + it->second;

                if(sum < minsum){
                    str.clear();
                str.push_back(list2[i]);
                minsum = sum;
                }

                else if (sum == minsum){
                    str.push_back(list2[i]);
                }
            }
        }
        return str;
    }
};