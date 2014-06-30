#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
  // sort and find -> O(1) space, O(NlogN) time
  // hashmap -> O(n) space, O(n) time
  int longestConsecutive(vector<int> &num) {
    int size = num.size();
    if (size == 0) {
      return 0;
    }

    unordered_map<int, bool> hMap;
    for (int i = 0; i < size; i++) {
      hMap[num[i]] = false;
    }

    int LC = 1;
    for (int i = 0; i < size; i++) {
      if (hMap[num[i]]) {
        continue;
      }

      int tmp = num[i] + 1;
      int crntMax = 1;
      while (hMap.find(tmp) != hMap.end()) {
        crntMax++;
        hMap[tmp] = true;
        tmp++;
      }

      tmp = num[i] - 1;
      while(hMap.find(tmp) != hMap.end()) {
        crntMax++;
        hMap[tmp] = true;
        tmp--;
      }

      LC = max(LC, crntMax);
    }

    return LC;
  }
};
