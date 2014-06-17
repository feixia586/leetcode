#include <vector>

using namespace std;

class Solution {
public:
  int minimumTotal(vector<vector<int> > &triangle) {
    //return method_A(triangle);
    return method_B(triangle);
  }

  /******************************************************************
   * Method 1: O(n^2) space
   ******************************************************************/
  int method_A(vector<vector<int> > &triangle) {
    // state: f[i][j] -> minimum path sum from (i, j) to bottom
    // function: f[i][j] = min(f[i+1][j], f[i+1][j+1]) + tri[i][j]
    // initialization: f[n-1][j] = tri[n-1][j]
    // answer: f[0][0]
    int n = triangle.size();
    vector<vector<int> > sum(n, vector<int>(n, 0));
    for (int j = 0; j < n; j++) {
      sum[n-1][j] = triangle[n-1][j];
    }

    for (int i = n - 2; i >= 0; i--) {
      for (int j = 0; j <= i; j++) {
        sum[i][j] = min(sum[i+1][j], sum[i+1][j+1]) + triangle[i][j];
      }
    }

    return sum[0][0];
  }

  /******************************************************************
   * Method 2: O(n) space
   ******************************************************************/
  int method_B(vector<vector<int> > &triangle) {
    int n = triangle.size();
    vector<vector<int> > sum(2, vector<int>(n, 0));
    int rem = (n - 1) % 2;
    for (int j = 0; j < n; j++) {
      sum[rem][j] = triangle[n-1][j];
    }

    for (int i = n - 2; i >= 0; i--) {
      int rem1 = i % 2, rem2 = (i + 1) % 2;
      for (int j = 0; j <= i; j++) {
        sum[rem1][j] = min(sum[rem2][j], sum[rem2][j+1]) + triangle[i][j];
      }
    }

    return sum[0][0];
  }
};
