#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    return naive_method(numbers, target);
  }
  /************************************************************
   *
   ************************************************************/

  /************************************************************
   * Naive Method. Time O(n^2); Space O(1)
   ************************************************************/
  vector<int> naive_method(vector<int>& numbers, int target) {
    vector<int> res;
    int idx1, idx2;
    for(size_t i = 0; i < numbers.size(); i++) {
      for(size_t j = i+1; j < numbers.size(); j++) {
        if(numbers[i] + numbers[j] == target) {
          idx1 = i+1;
          idx2 = j+1;
          break;
        }
      }
    }

    res.push_back(idx1);
    res.push_back(idx2);
    return res;
  }
};
