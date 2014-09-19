#include <iostream>

using namespace std;

class Solution {
public:
  int removeDuplicates(int A[], int n) {
    if (n <= 2) {
      return n;
    }

    int k = 1;
    for (int i = 2; i < n; i++) {
      if (A[i] != A[k] || A[i] != A[k - 1]) {
        A[++k] = A[i];
      }
    }

    return k + 1;
  }
};
