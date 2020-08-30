#include <bits/stdc++.h>
using namespace std;

int sum(vector<int>& a, vector<int>& b) {
  int s = 0;
  int c = 0;
  int la = a.size() - 1;
  int lb = b.size() - 1;

  int base = 1;
  while (la >= 0 and lb >= 0) {

    int v = a[la] + b[lb] + c;
    c = v / 10;
    s += (v % 10) * base;

    --la;
    --lb;

    base *= 10;
  }

  while (la >= 0) {
    int v = a[la] + c;
    c = v / 10;
    s += (v % 10) * base;
    --la;
    base *= 10;
  }

  while (lb >= 0) {
    int v = b[lb] + c;
    c = v / 10;
    s += (v % 10) * base;
    --lb;
    base *= 10;
  }

  return s + (c * base);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
      cin >> b[i];
    }

    cout << sum(a, b) << '\n';
  }
  return 0;
}
