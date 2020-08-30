#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

struct Trie {
  char val;
  vector<Trie *> children;
  unsigned childs = 0;
  bool is_word = false;
  Trie(char c) {
    this->val = c;
    this->children.assign(26, nullptr);
  }
  Trie() { this->children.assign(26, nullptr); }
  void insert(const string &s) {
    Trie *curr = this;
    for (auto c : s) {
      curr->childs |= (1 << (c - 'a'));
      if (curr->children[c - 'a'] == nullptr) {
        curr->children[c - 'a'] = new Trie(c);
      }
      curr = curr->children[c - 'a'];
    }
    curr->is_word = true;
  }

  int child_cnt() {
    return __builtin_popcount(childs);
  }

  string longest_prefix() {
    string pfx = "";
    Trie *curr = this;
    while (curr->child_cnt() == 1 && curr->is_word != true) {
      for (auto c : curr->children) {
        if (c != nullptr) {
          curr = c;
        }
      }
      pfx.push_back(curr->val);
    }
    return pfx;
  }
};

class Solution {
public:
  string longestCommonPrefix(vector<string>& strs) {
    Trie trie;
    for(auto& s: strs) {
      trie.insert(s);
    }
    return trie.longest_prefix();  
  }
};

int main() {

  return 0;
}

