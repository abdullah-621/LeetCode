class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {

        if(numerator == 0) return "0";

        string result = "";

        if((long long)numerator * (long long)denominator < 0)
        {
            result.push_back('-');
        }

        long long absnumerator = labs(numerator);
        long long absdenominator = labs(denominator);

        long long integerDiv = absnumerator / absdenominator;

        result += to_string(integerDiv);

        long long remain = absnumerator % absdenominator;

        if (remain == 0){
            return result;
        }

        result += '.';

        unordered_map<int,int>mp;

        while(remain != 0)
        {
            if(mp.find(remain) != mp.end())
            {
                result.insert(mp[remain], "(");
                result += ")";
                break;
            }

            mp[remain] = result.length();

            remain *= 10;
            int digite = remain / absdenominator;
            result += to_string(digite);

            remain = remain % absdenominator;
        }
    
    return result;

    }
};