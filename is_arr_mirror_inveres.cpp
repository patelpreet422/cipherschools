#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

bool is_mirror(vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    if (v[v[i]] != i) {
      return false;
    }
  }
  return true;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto& e: v) {
      cin >> e;
    }
    cout << boolalpha << is_mirror(v) << '\n';
  }
  return 0;
}

