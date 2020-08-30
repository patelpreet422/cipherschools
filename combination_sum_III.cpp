#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  vector<vector<int>> res;
  vector<int> chosen;
  int k;
  
  void solve(int i, int target) {
    if(target == 0 and chosen.size() == k) {
      res.push_back(chosen);
      return;
    }
    
    if(i >= 10 or target < 0) {
      return;
    }
  
    for(; i <= 9; ++i) {
      chosen.push_back(i);
      solve(i+1, target-i);
      chosen.pop_back();
    }
  }
  
  vector<vector<int>> combinationSum3(int k, int n) {
    this->k = k;
    solve(1, n);
    return res;
  }
};

int main() {

  return 0;
}

