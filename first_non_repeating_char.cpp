#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    queue<char> q;
    int n;
    cin >> n;
    vector<int> f(26, 0);

    for (int i = 0; i < n; ++i) {
      char c;
      cin >> c;
      ++f[c - 'a'];
      q.push(c);
      while (!q.empty() and f[q.front() - 'a'] > 1) {
        q.pop();
      }

      if (!q.empty()) {
        cout << q.front() << ' ';
      } else {
        cout << -1 << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}
