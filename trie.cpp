#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Trie {
public:
  vector<Trie*> children;
  bool is_word = false;
  /** Initialize your data structure here. */
  Trie() {
    children.assign(26, nullptr);
  }

  /** Inserts a word into the trie. */
  void insert(string word) {
    Trie* curr = this;
    for(auto c: word) {
      if(curr->children[c-'a'] == nullptr) {
        curr->children[c-'a'] = new Trie();
      }
      curr = curr->children[c-'a'];
    }
    curr->is_word = true;
  }

  /** Returns if the word is in the trie. */
  bool search(string word) {
    Trie* curr = this;
    for(auto c: word) {
      if(curr->children[c-'a'] == nullptr) {
        return false;
      }
      curr = curr->children[c-'a'];
    }
    return curr->is_word;
  }

  /** Returns if there is any word in the trie that starts with the given prefix. */
  bool startsWith(string word) {
    Trie* curr = this;
    for(auto c: word) {
      if(curr->children[c-'a'] == nullptr) {
        return false;
      }
      curr = curr->children[c-'a'];
    }
    return true;
  }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

int main() {

  return 0;
}

