#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution {
public:
  bool isSymmetric(TreeNode* root) {
    if(root == nullptr) return true;
    stack<TreeNode*> s1, s2;
    s1.push(root);
    s2.push(root);
    while(!s1.empty() and !s2.empty()) {
      auto t1 = s1.top(); s1.pop();
      auto t2 = s2.top(); s2.pop();
      if(t1 == nullptr and t2 == nullptr) continue;
      if(t1 == nullptr or t2 == nullptr) return false;
      if(t1->val != t2->val) return false;
      s1.push(t1->left);
      s1.push(t1->right);
      s2.push(t2->right);
      s2.push(t2->left);
    }
    return s1.empty() and s2.empty();
  }
};

int main() {

  return 0;
}

