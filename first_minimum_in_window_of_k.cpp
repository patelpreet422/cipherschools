#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> first_min(vector<int> &v, int k) {
  vector<int> r;
  int n = v.size();
  deque<int> q;
  for(int i = 0; i < n; ++i) {
    while(!q.empty() and q.front() <= i-k) {
      q.pop_front();
    }
    q.push_back(i);
    while(!q.empty() and v[q.front()] > 0) {
      q.pop_front();
    }
    if (q.empty() and i >= k - 1) {
      r.push_back(0);
    } else if (i >= k - 1) {
      r.push_back(v[q.front()]);
    }
  }
  return r;
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
    int k;
    cin >> k;
    for (auto e : first_min(v, k)) {
      cout << e << ' ';
    }
    cout << '\n';
  }
  return 0;
}

