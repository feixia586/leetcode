#include <iostream>

using namespace std;

class Solution {
public:
    bool search(int A[], int n, int target) {
        int low = 0, high = n - 1;
        while (low + 1 < high) {
            int mid = low + (high - low) / 2;
            if (target == A[mid]) {
                return true;
            }

            if (A[mid] > A[low]) {
                if (target >= A[low] && target < A[mid]) {
                    high = mid;
                } else {
                    low = mid;
                }
            } else if (A[mid] < A[low]) {
                if (target <= A[high] && target > A[mid]) {
                    low = mid;
                } else {
                    high = mid;
                }
            } else {
                low++;
            }
        }

        if (target == A[low]) return true;
        if (target == A[high]) return true;

        return false;
    }
};
