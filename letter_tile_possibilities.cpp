#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  unordered_set<string> mp;
  
  void solve(string& s, int i, string& chosen) {
    if(i == s.size()) {
      if(!chosen.empty()) {
        do {
          mp.insert(chosen);
        } while(next_permutation(begin(chosen), end(chosen)));
      }
      return;
    }
    
    chosen.push_back(s[i]);
    solve(s, i+1, chosen);
    chosen.pop_back();
    solve(s, i+1, chosen);
  }
  
  int numTilePossibilities(string tiles) {
    string chosen = "";
    sort(begin(tiles), end(tiles));
    solve(tiles, 0, chosen);
    return mp.size();
  }
};

int main() {

  return 0;
}

