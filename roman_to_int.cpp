#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  unordered_map<string, int> mp{
    {"I", 1},
    {"IV", 4},
    {"V", 5},
    {"IX", 9},
    {"X", 10},
    {"XL", 40},
    {"L", 50},
    {"XC", 90},
    {"C", 100},
    {"CD", 400},
    {"D", 500},
    {"CM", 900},
    {"M", 1000}
  };
  
  int romanToInt(string s) {
    int r = 0;
    for(int i = 0; i < s.size(); ++i) {
      string si(1, s[i]);
      if(i + 1 < s.size()) {
        si += s[i+1];
        if(mp.find(si) != mp.end()) {
          r += mp[si];
          ++i;
          continue;
        }
        si.pop_back();
      }
      if(mp.find(si) != mp.end()) {
        r += mp[si];
      }
    }
    return r;
  }
};

int main() {

  return 0;
}

