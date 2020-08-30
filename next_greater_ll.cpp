#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  vector<int> nextLargerNodes(ListNode *head) {
    vector<int> arr;
    while (head) {
      arr.push_back(head->val);
      head = head->next;
    }
    int n = arr.size();
    vector<int> res(n, 0);
    stack<int> stk;
    for (int i = n - 1; i >= 0; --i) {
      int val = arr[i];
      while (!stk.empty() and stk.top() <= val) {
        stk.pop();
      }
      if (!stk.empty()) {
        res[i] = stk.top();
      }
      stk.push(val);
    }
    return res;
  }
};


int main() {

  return 0;
}

