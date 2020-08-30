#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  int maxProduct(vector<int> &nums) {
    if (nums.empty()) {
      return 0;
    }
    int mi = 1;
    int mx = 1;
    int r = nums[0];
    for (auto e : nums) {
      int a = mx * e;
      int b = mi * e;
      mi = min({a, b, e});
      mx = max({a, b, e});
      r = max({r, mx});
    }
    return r;
  }
};

int main() {

  return 0;
}

