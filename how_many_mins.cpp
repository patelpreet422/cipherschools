#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  
  int lower_bound(vector<int>& v, int x) {
    int l = 0, h = v.size() - 1;
    int lb = 0;
      while (l <= h) {
        int m = (l + h) / 2;
        if (v[m] >= x) {
          lb = m;
          h = m - 1;
        } else {
          l = m + 1;
        }
      }
    return lb;
  }
  
  vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> orig = nums;
    sort(begin(nums), end(nums));
    int n = nums.size();
    vector<int> res(n);
    for(int i = 0; i < n; ++i) {
      res[i] = lower_bound(nums, orig[i]);
    }
    return res;
  }
};

int main() {

  return 0;
}

