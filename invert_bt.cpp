#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  TreeNode* invertTree(TreeNode* root) {
    if(root == nullptr) {
      return nullptr;
    }
    stack<TreeNode*> stk;
    stk.push(root);
    while(!stk.empty()) {
      TreeNode* top = stk.top();
      stk.pop();
      swap(top->left, top->right);
      if(top->left) {
        stk.push(top->left);
      }
      
      if(top->right) {
        stk.push(top->right);
      }
    }
    return root;
  }
};

int main() {

  return 0;
}

