#include <LeetcodeHelper.h>
#include <bits/stdc++.h>
#include <prettyprint.hpp>
using namespace std;
using ll = long long;

class Solution {
public:
  ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
    ListNode *arunner = a;
    ListNode *brunner = b;
    while (arunner != brunner) {
      if (arunner == nullptr) {
        arunner = b;
      } else {
        arunner = arunner->next;
      }

      if (brunner == nullptr) {
        brunner = a;
      } else {
        brunner = brunner->next;
      }
    }
    return arunner;
  }
};

int main() {

  return 0;
}

