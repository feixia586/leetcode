#include <algorithm>

using namespace std;

class Solution {
public:
  // If we can use extra space, let flag[A[i]-1] = A[i]; Now that we can only
  // use constant space, let A[A[i]-1] = A[i]. Besides, we don't care about the
  // value that value <=0 or value > n
  int firstMissingPositive(int A[], int n) {
    int  i = 0;
    while (i < n) {
      if (A[i] > 0 && A[i] <= n && A[A[i]-1] != A[i])
        swap(A[i], A[A[i]-1]);
      else
        i++;
    }

    for (i = 0; i < n; i++)
      if (A[i] != i+1)
        return i+1;

    return n+1;
  }
};
