class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int no_of_5 = 0;
        int no_of_10 = 0;


        for(int note : bills)
        {

            if(note == 5)
            {
                no_of_5 ++;
            }
            else if(note == 10)
            {
                no_of_10 ++;
                if(no_of_5 >= 1)
                {
                    no_of_5--;
                }
                else 
                {
                    return false;
                }
            }
            else if(note == 20)
            {
                if(no_of_5 >= 1 && no_of_10 >= 1)
                {
                    no_of_5 --;
                    no_of_10 --;
                }
                else if(no_of_5 >= 3)
                {
                    no_of_5 -=3;
                }
                else
                {
                    return false;
                }
            }
        }

        return true;
    }
};