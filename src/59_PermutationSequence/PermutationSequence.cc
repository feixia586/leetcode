#include <string>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
  // Here is the thought:
  // Try to figure out the first number, then the second, the third...
  // Each candidate of first number has (n-1)! forms
  // Each candidate of second number has (n-2)! forms
  string getPermutation(int n, int k) {
    string str = "";

    int factor = 1;
    for (int i = 1; i < n; i++) { factor *= i; }

    k--;
    vector<bool> used(n, false);
    for (int i = 0; i < n; i++) {
      int idx = k / factor;
      k = k % factor;

      int count = 0;
      for (int j = 0; j < n; j++) {
        if (used[j] == false) {
          if (count == idx) {
            str += ('0' + j + 1);
            used[j] = true;
            break;
          }

          count++;
        }
      }

      if (i < n - 1) { factor = factor / (n - 1 - i); }
    }

    return str;
  }
};
