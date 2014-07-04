class Solution {
public:
  int singleNumber(int A[], int n) {
    int res = 0;
    int bits[32] = {};
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 32; j++) {
        bits[j] += (A[i] >> j) & 1;
        bits[j] %= 3;
      }
    }

    for (int j = 0; j < 32; j++) {
      res |= bits[j] << j;
    }

    return res;
  }
};
