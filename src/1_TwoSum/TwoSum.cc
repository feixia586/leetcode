#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    return hashMapMethod(numbers, target);
    //return naive_method(numbers, target);
  }

  /************************************************************
   * HashMap Method. Time O(n); Space O(n)
   ************************************************************/
  vector<int> hashMapMethod(vector<int> &numbers, int target) {
    vector<int> res;
    int size = numbers.size();
    if (size == 0) {
      return res;
    }

    unordered_map<int, int> myMap;
    for (int i = 0; i < size; i++) {
      myMap[numbers[i]] = i;
    }
    for (int i = 0; i < size; i++) {
      int val = target - numbers[i];
      if (myMap.find(val) != myMap.end()) {
        int idx = myMap.find(val)->second;
        if (idx == i) {
          continue;
        }
        res.push_back(i + 1);
        res.push_back(idx + 1);
        return res;
      }
    }

    return res;
  }


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
