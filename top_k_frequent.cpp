#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  int partition(vector<pair<int, int>> &v, int l, int h) {
    int ll = l;
    int pivot = v[h].second;
    for (int i = l; i < h; ++i) {
      if (v[i].second < pivot) {
        swap(v[ll++], v[i]);
      }
    }
    swap(v[ll], v[h]);
    return ll;
  }

  int select(vector<pair<int, int>> &v, int k) {
    int l = 0, h = v.size() - 1;
    while (l <= h) {
      int m = partition(v, l, h);
      if (m == k) {
        return m;
      }
      if (k < m) {
        h = m - 1;
      } else {
        l = m + 1;
      }
    }
    return -1;
  }

  vector<int> topKFrequent(vector<int> &nums, int k) {
    vector<int> res;
    unordered_map<int, int> um;
    for (auto e : nums) {
      ++um[e];
    }

    vector<pair<int, int>> fs(begin(um), end(um));

    for (int i = select(fs, fs.size() - k); i < fs.size(); ++i) {
      res.push_back(fs[i].first);
    }

    return res;
  }
};

/*
0 1 2 3 4 5 

f + b = n-1
(k-1) + b = n-1
  
b = n-1-k+1
b = n-k
*/

int main() {

  return 0;
}

