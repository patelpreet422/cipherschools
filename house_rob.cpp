#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  int rob(vector<int>& nums) {
    if(nums.empty()) {
      return 0;
    } 
    
    int n = nums.size();
    vector<int> dp(n+1, 0);    
    dp[1] = nums[0];
    for(int i = 2; i <= n; ++i) {
      dp[i] = max(dp[i-1], dp[i-2] + nums[i-1]);
    }
    return dp[n];
  }
};

int main() {

  return 0;
}

