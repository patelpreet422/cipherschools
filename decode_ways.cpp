#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  vector<int> memo;
  int decode(string &s, int i) {
    if (s[i] == '0')
      return 0;
    if (i == s.size() - 1 or i >= s.size()) {
      return 1;
    }
    if (memo[i] != -1)
      return memo[i];
    int v = (s[i] - '0') * 10 + (s[i + 1] - '0');
    int r = decode(s, i + 1);
    if (v <= 26)
      r += decode(s, i + 2);
    memo[i] = r;
    return r;
  }
  int numDecodings(string s) {
    memo.assign(s.size(), -1);
    return decode(s, 0);
  }
};

int main() {

  return 0;
}

