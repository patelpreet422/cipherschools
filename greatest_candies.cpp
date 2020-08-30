#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int n = candies.size();
    vector<bool> res(n, false);
    int mx_candies = 0;
    for(auto c: candies) {
      mx_candies = max(mx_candies, c);
    }
    
    for(int i = 0; i < candies.size(); ++i) {
      candies[i] += extraCandies;
      res[i] = (candies[i] >= mx_candies);
    }
    return res;
  }
};

int main() {

  return 0;
}

