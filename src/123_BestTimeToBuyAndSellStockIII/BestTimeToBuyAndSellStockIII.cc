#include <vector>

using namespace std;

class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int size = prices.size();
    if (size == 0 || size == 1) {
      return 0;
    }

    vector<int> left(size, 0);
    vector<int> right(size, 0);

    // left DP, calculate the maximum profit in [0..i]
    left[0] = 0;
    int minPrice = prices[0];
    for (int i = 1; i < size; i++) {
      minPrice = min(minPrice, prices[i]);
      left[i] = max(left[i-1], prices[i] - minPrice);
    }

    // right DP, calculate the maximum profit in [i..n-1]
    right[size-1] = 0;
    int maxPrice = prices[size-1];
    for (int i = size - 2; i >= 0; i--) {
      maxPrice = max(maxPrice, prices[i]);
      right[i] = max(right[i+1], maxPrice - prices[i]);
    }

    // combine the left and right
    int maxProfit = 0;
    for (int i = 0; i < size; i++) {
      maxProfit = max(maxProfit, left[i] + right[i]);
    }

    return maxProfit;
  }
};
