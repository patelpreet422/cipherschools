#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  int moves(vector<int> &v, int i) {
    int m = 0;
    for (; i < v.size(); i += 2) {
      if (i == 0) {
        m += max(v[i] - v[i + 1] + 1, 0);
      } else if (i == v.size() - 1) {
        m += max(v[i] - v[i - 1] + 1, 0);
      } else {
        m += max(v[i] - min(v[i - 1], v[i + 1]) + 1, 0);
      }
    }
    return m;
  }
  int movesToMakeZigzag(vector<int> &v) {
    return min(moves(v, 0), moves(v, 1));
  }
};

int main() {

  return 0;
}

