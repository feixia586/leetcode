#include <vector>
#include <assert.h>

using namespace std;

class Solution {
public:
  int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
    assert(gas.size() == cost.size());

    int size = gas.size();
    int i = 0;
    while (i < size) {
      int gasLeft = 0;
      int j = 0;
      for (j = 0; j < size; j++) {
        int pos = (i + j) % size;
        gasLeft += (gas[pos] - cost[pos]);
        if (gasLeft < 0) {
          break;
        }
      }

      if (gasLeft >= 0) { return i; }
      else { i += (j + 1); }
    }

    return -1;
  }
};
