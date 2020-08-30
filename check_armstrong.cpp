#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

bool is_armstrong(int k) {
  int s = 0;
  int i = k;
  while(i) {
    int rem = i%10;
    s += (rem*rem*rem);
    i /= 10;
  }
  return s == k;
}

int main() {
  int k = 153;
  cout << boolalpha << is_armstrong(k) << '\n';
  return 0;
}

