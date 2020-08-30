#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int r = 0;
    int b = 1;
    for (int i = s.size() - 1; i >= 0; --i) {
      r = r + b * (s[i] == '1');
      b *= 2;
    }
    cout << r << '\n';
  }
  return 0;
}
