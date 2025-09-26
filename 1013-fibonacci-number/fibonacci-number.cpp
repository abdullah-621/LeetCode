// Recursive Approach
// class Solution {
// public:
//     int fib(int n) {
//         if(n <= 1)
//         {
//             return n;
//         }

//         return fib(n - 1) + fib(n - 2);
//     }
// };

// Dynamic Programming Memoization(Top-Down)
// class Solution {
// public:
//     int DpMemo(int n, vector<int>&dp)
//     {
//         // base case
//         if(n <= 1) return n;

//         // Already calculated
//         if(dp[n] != -1)
//         {
//          return dp[n];
//         }

//         return dp[n] = DpMemo(n - 1, dp) + DpMemo(n - 2, dp);
//     }

//     int fib(int n) {
//         vector<int>dp(n + 1, -1);
//         return DpMemo(n, dp);
//     }
// };
class Solution {
public:
    int fib(int n) {
        vector<int> dp(n + 1, -1);
        if(n > 0){
        dp[0] = 0;
        dp[1] = 1;
        }
        else
        {
            dp[0] = 0;
        }

        for (int i = 2; i < dp.size(); i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[dp.size() - 1];
    }
};

// Dynamic Programming Tabulation(Bottom -)