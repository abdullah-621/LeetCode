class Solution {
public:
int convert(int integer){

  int sum = 0;
  while (integer != 0)
  {
    sum += integer % 10;
    integer /= 10;
  }
  return sum;
}
int getLucky(string s, int k) {

        string sum = "";
  for (char ch : s)
  {
    sum += to_string(ch - 'a' + 1);
  }

  int ans = 0;
        for (char ch : sum) {
            ans += ch - '0'; // first sum of digits (k-- once here)
        }

        k--;

  while (k--)
  {
    ans = convert(ans);
  }

    return ans;
        
    }
};