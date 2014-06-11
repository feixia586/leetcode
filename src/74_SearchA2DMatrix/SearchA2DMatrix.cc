#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        if (matrix.size() == 0) {
            return false;
        }

        int rowNum = matrix.size();
        int colNum = matrix[0].size();

        int low = 0, high = rowNum * colNum - 1;
        while(low + 1 < high) {
            int mid = low + (high - low) / 2;
            int val = matrix[mid / colNum][mid % colNum];

            if (target == val) {
                return true;
            } else if (target > val) {
                low = mid;
            } else {
                high = mid;
            }
        }

        if (matrix[low / colNum][low % colNum] == target) {
            return true;
        }
        if (matrix[high / colNum][high % colNum] == target) {
            return true;
        }

        return false;
    }
};
