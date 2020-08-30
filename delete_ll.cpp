#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  void deleteNode(ListNode* node) {
    if(node->next) {
      node->val = node->next->val;
      node->next = node->next->next;
    }
  }
};

int main() {

  return 0;
}

