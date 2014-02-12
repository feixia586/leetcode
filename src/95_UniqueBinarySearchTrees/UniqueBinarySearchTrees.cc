#include <assert.h>
#include <vector>

using namespace std;

class Solution {
public:
  int numTrees(int n) {
    assert(n >= 1);
    vector<int> count(n+1, 0);
    count[0] = 1;
    count[1] = 1;
    for (int i = 2; i <= n; i++) {
      for (int node = 1; node <= i; node++) {
        count[i] += count[node-1] * count[i-node];
      }
    }
    return count[n];
  }
};
