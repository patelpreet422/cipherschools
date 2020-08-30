#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  unordered_map<string, vector<string>> memo;
  vector<string> wordBreak(string s, vector<string>& wordDict) {
    if (memo.find(s) != memo.end()) return memo[s];
    if (s.empty()) return {""};
    vector<string> res;
    for (auto& word : wordDict) {
      if (s.substr(0, word.size()) != word) continue;
      vector<string> rem = wordBreak(s.substr(word.size()), wordDict);
      for (auto& str : rem) {
        res.push_back(word + (str.empty() ? "" : " ") + str);
      }
    }
    memo[s] = res;
    return res;
  }
};

int main() {

  return 0;
}

