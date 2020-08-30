#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  vector<int> sortedSquares(vector<int>& A) {
    vector<int> res(A.size());
    for(auto& e: A) {
      e *= e;
    }
    int i = A.size() - 1, l = 0, h = A.size() - 1;
    while(l <= h) {
      if(A[l] < A[h]) {
        res[i--] = A[h--];
      } else {
        res[i--] = A[l++];
      }
    }
    return res;
  }
};

int main() {

  return 0;
}

