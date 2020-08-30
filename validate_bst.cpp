#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  TreeNode* prev = nullptr;
  bool isValidBST(TreeNode* root) {
    if (!root)
      return true;
    
    stack<TreeNode*> stk;
    TreeNode* curr = root;
    TreeNode* pre = nullptr;
    while(!stk.empty() or curr) {
      while(curr) {
        stk.push(curr);
        curr = curr->left;
      }
      
      TreeNode* top = stk.top();
      stk.pop();
      if(pre) {
        if(pre->val >= top->val) {
          return false;
        }
      }
      pre = top;
      
      if(top->right) {
        curr = top->right;
      }
    }
    return true;
  }
};

int main() {

  return 0;
}

