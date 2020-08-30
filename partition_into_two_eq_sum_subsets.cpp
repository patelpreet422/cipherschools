#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  bool coin_change(vector<int>& coins, int target) {
    int n = coins.size();
    vector<bool> prev(target+1, false);
    prev[0] = true;
    
    for(int i = 0; i < n; ++i) {
      vector<bool> dp = prev;
      for(int j = 0; j <= target; ++j) {      
        if(j - coins[i] >= 0) {
          dp[j] = prev[j-coins[i]] or prev[j];
        } else {
          dp[j] = prev[j];
        }
      }
      prev = dp;
    }
    return prev.back();
  }
  
  bool canPartition(vector<int>& nums) {
    int s = 0;
    for(auto e: nums) {
      s += e;
    }
    if(s % 2)
      return false;
    
    return coin_change(nums, s/2);
  }
};

int main() {

  return 0;
}

