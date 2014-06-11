#include <iostream>
#include <assert.h>

using namespace std;

class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        assert(A != NULL && B != NULL);
        if (n == 0) {
            return;
        }

        int k = m + n - 1;
        int i = m - 1, j = n - 1;
        while(i >= 0 && j >= 0) {
            if (A[i] >= B[j]) {
                A[k--] = A[i--];
            } else {
                A[k--] = B[j--];
            }
        }

        if (i < 0) {
            while (j >= 0) {
                A[k--] = B[j--];
            }
        }
    }
};
