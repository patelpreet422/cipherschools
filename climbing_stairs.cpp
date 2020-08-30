#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  int climbStairs(int n) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; ++i) {
      if (i - 1 >= 0)
        dp[i] += dp[i - 1];
      if (i - 2 >= 0)
        dp[i] += dp[i - 2];
    }
    return dp[n];
  }
};

int main() {

  return 0;
}

