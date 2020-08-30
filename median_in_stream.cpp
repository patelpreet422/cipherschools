#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class MedianFinder {
public:
  priority_queue<int> mx;
  priority_queue<int, vector<int>, greater<int>> mi;
  
  MedianFinder() {

  }

  void addNum(int num) {
    mx.push(num);
    mi.push(mx.top());
    mx.pop();
    if(mi.size() > mx.size()) {
      mx.push(mi.top());
      mi.pop();
    }
  }

  double findMedian() {
    if(mx.size() == mi.size()) {
      return (mx.top() + mi.top())/2.;
    }
    return mx.top();
  }
};


int main() {

  return 0;
}

