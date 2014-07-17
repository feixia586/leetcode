#include <vector>

using namespace std;

class Solution {
public:
  void setZeroes(vector<vector<int> > &matrix) {
    if (matrix.size() == 0 || matrix[0].size() == 0) {
      return;
    }

    int rowNum = matrix.size(), colNum = matrix[0].size();
    bool firstRow = false, firstCol = false;

    // check first row and first col, see if they need to be set to 0
    for (int i = 0; i < rowNum; i++) {
      if (matrix[i][0] == 0) {
        firstCol = true;
        break;
      }
    }
    for (int j = 0; j < colNum; j++) {
      if (matrix[0][j] == 0) {
        firstRow = true;
        break;
      }
    }

    // check the matrix except the first row and first col, set flag accordingly
    for (int i = 1; i < rowNum; i++) {
      for (int j = 1; j < colNum; j++) {
        if (matrix[i][j] == 0) {
          matrix[i][0] = 0;
          matrix[0][j] = 0;
        }
      }
    }

    // set the matrix to 0 according to flags in first row and first col
    for (int i = 1; i < rowNum; i++) {
      if (matrix[i][0] == 0) {
        for (int j = 1; j < colNum; j++) {
          matrix[i][j] = 0;
        }
      }
    }
    for (int j = 1; j < colNum; j++) {
      if (matrix[0][j] == 0) {
        for (int i = 1; i < rowNum; i++) {
          matrix[i][j] = 0;
        }
      }
    }

    // set the first row and first col
    if (firstRow) {
      for (int j = 0; j < colNum; j++) {
        matrix[0][j] = 0;
      }
    }
    if (firstCol) {
      for (int i = 0; i < rowNum; i++) {
        matrix[i][0] = 0;
      }
    }
  }
};
