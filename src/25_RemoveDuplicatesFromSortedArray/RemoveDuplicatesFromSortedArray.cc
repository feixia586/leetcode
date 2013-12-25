class Solution {
public:
  int removeDuplicates(int A[], int n) {
    if (n <= 1)
      return n;

    int k = 0;
    for (int i = 1; i < n; i++) {
      if (A[k] != A[i])
        A[++k] = A[i];
    }

    int len = k + 1;
    return len;
  }
};
