#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  int coinChange(vector<int>& coins, int amount) {
    if(coins.empty()) {
      return amount == 0? 0: -1;
    }
    int n = coins.size();
    vector<vector<long>> dp(n+1, vector<long>(amount+1, INT_MAX));
    for(int i = 0; i <= n; ++i) {
      for(int t = 0; t <= amount; ++t) {
        if(i == 0 and t == 0) {
          dp[i][t] = 0;
        }
        if(i != 0 and t == 0) {
          dp[i][t] = 0;
        }
        if(i == 0 and t != 0) {
          dp[i][t] = INT_MAX;
        }
        if(i != 0 and t != 0) {
          if(t - coins[i-1] >= 0) {        
            dp[i][t] = min(1+dp[i][t-coins[i-1]], dp[i-1][t]);
          } else {
            dp[i][t] = dp[i-1][t];
          }
        }
      } 
    }
    return dp[n][amount] == INT_MAX? -1: dp[n][amount];
  }
};

int main() {

  return 0;
}

