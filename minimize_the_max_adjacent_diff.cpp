#ifdef DEBUG
#include <LeetcodeHelper.h>
#include <prettyprint.hpp>
#endif
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> find_max_of_k_size_window(vector<int> &v, int k) {
  vector<int> r;
  deque<int> q;
  int n = v.size();
  for (int i = 0; i < n; ++i) {
    while (!q.empty() and q.front() <= i - k) {
      q.pop_front();
    }

    while (!q.empty() and v[q.back()] < v[i]) {
      q.pop_back();
    }
    q.push_back(i);

    if (i >= k - 1) {
      r.push_back(v[q.front()]);
    }
  }
  return r;
}

int min_max_diff(vector<int> &v, int k) {
  int n = v.size();
  vector<int> diff(n - 1, 0);
  for (int i = 0; i < n - 1; ++i) {
    diff[i] = v[i + 1] - v[i];
  }
  vector<int> a = find_max_of_k_size_window(diff, n - k - 1);
  return *min_element(begin(a), end(a));
}

int main() {
  int k = 2;
  vector<int> v{3, 7, 8, 10, 14};
  cout << min_max_diff(v, k) << '\n';
  return 0;
}

