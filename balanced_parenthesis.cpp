#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  bool isValid(string s) {
    if (s.size() & 1)
      return false;
    stack<char> stk;
    for (auto e : s) {
      switch (e) {
      case ')':
        if (!stk.empty() and stk.top() == '(')
          stk.pop();
        break;
      case ']':
        if (!stk.empty() and stk.top() == '[')
          stk.pop();
        break;
      case '}':
        if (!stk.empty() and stk.top() == '{')
          stk.pop();
        break;
      default:
        stk.push(e);
      }
    }
    return stk.empty();
  }
};

int main() {

  return 0;
}

