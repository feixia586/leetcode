#include <vector>

using namespace std;

class Solution {
public:
  vector<int> getRow(int rowIndex) {
    vector<int> res(rowIndex + 1, 1);
    for (int i = 0; i <= rowIndex; i++) {
      // Note: must from right to left, otherwise will casue multiple addition
      for (int j = i - 1; j > 0; j--) {
        res[j] = res[j - 1] + res[j];
      }
    }
        
    return res;
  }
};
