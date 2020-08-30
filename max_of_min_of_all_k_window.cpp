#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

vector<int> next_smaller_right(vector<int>& v) {
  int n = v.size();
  vector<int> res(n, n);
  stack<int> stk;

  for (int i = n - 1; i >= 0; --i) {
    int val = v[i];
    while (!stk.empty() and v[stk.top()] >= val) {
      stk.pop();
    }
    if (!stk.empty()) {
      res[i] = stk.top();
    }
    stk.push(i);
  }
  return res;
}

vector<int> next_smaller_left(vector<int> &v) {
  int n = v.size();
  vector<int> res(n, -1);
  stack<int> stk;
  for (int i = 0; i < n; ++i) {
    int val = v[i];
    while (!stk.empty() and v[stk.top()] >= val) {
      stk.pop();
    }
    if (!stk.empty()) {
      res[i] = stk.top();
    }
    stk.push(i);
  }
  return res;
}

vector<int> max_of_min_of_k_window(vector<int> &v) {
  vector<int> ans(v.size());
  auto nsr = next_smaller_right(v);
  auto nsl = next_smaller_left(v);
  for (int i = 0; i < v.size(); ++i) {
    int len = nsr[i] - nsl[i] - 1;
    ans[len - 1] = max(ans[len - 1], v[i]);
  }

  for (int i = v.size() - 2; i >= 0; --i) {
    ans[i] = max(ans[i], ans[i + 1]);
  }

  return ans;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &e : v) {
      cin >> e;
    }
    for (auto e : max_of_min_of_k_window(v)) {
      cout << e << ' ';
    }
    cout << '\n';
  }
  return 0;
}

