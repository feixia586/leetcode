#include <vector>

using namespace std;

class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int profit = 0;
    // we have to use (int) in front of prices.size(), otherwise there will be runtime error for size = 0
    // -> it treats prices.size() - 1 as unsigned integer
    for (int i = 0; i < (int)prices.size() - 1; i++) {
      int diff = prices[i+1] - prices[i];
      if (diff > 0) {
        profit += diff;
      }
    }

    return profit;
  }
};
