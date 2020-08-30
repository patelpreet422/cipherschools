#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  int bottom(int n) {
    vector<long> dp(n+1, 0);
    dp[0] = 0;
    for(int i = 1; i <= n; ++i) {
      if(sqrt(double(i)) == (int)sqrt(i)) {
        dp[i] = 1;
      } else {
        long a = INT_MAX;
        for(int j = 1; j*j < i; ++j) {
          a = min(a, 1+dp[i-j*j]);
        }
        dp[i] = a;
      }
    }
    return dp.back();
  }
  
  int numSquares(int n) {
    return bottom(n);
  }
};

int main() {

  return 0;
}

