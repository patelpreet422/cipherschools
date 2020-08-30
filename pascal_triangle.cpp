#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  vector<vector<int>> generate(int r) {
    if(r == 0) {
      return {};
    }
    vector<vector<int>> res{{1}};
    for(int k = 0; k < r-1; ++k) {
      vector<int> nr(res[k].size()+1);
      nr[0] = 1;
      nr[nr.size() - 1] = 1;
      for (int i = 1; i < nr.size() - 1; ++i) {
        nr[i] = res[k][i] + res[k][i - 1];
      }
      res.push_back(nr);
    }
    return res;
  }
};

int main() {

  return 0;
}

