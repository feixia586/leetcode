#include <iostream>

using namespace std;

class Solution {
public:
  int removeDuplicates(int A[], int n) {
    if (n <= 2) {
      return n;
    }

    int k = 0;
    for (int i = 2; i < n; i++) {
      if (A[i] != A[k] || A[i] != A[k+1]) {
        k++;
        A[k+1] = A[i];
      }
    }

    return k+2;
  }
};
