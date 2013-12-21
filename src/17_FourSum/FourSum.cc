#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
  vector<vector<int> > fourSum(vector<int> &num, int target) {
    sort(num.begin(), num.end());

    vector<vector<int> > res;
    set<vector<int> > s;
    int len = num.size();       // Assume len >= 4

    for (int low = 0; low < len-3; low++) {
      for (int high = len-1; high > low+2; high--) {
        int p = low + 1;
        int q = high - 1;
        while(p < q) {
          int sum = num[low] + num[p] + num[q] + num[high];
          if(sum > target)
            q--;
          else if (sum < target)
            p++;
          else {
            vector<int> tmp;
            tmp.push_back(num[low]); tmp.push_back(num[p]);
            tmp.push_back(num[q]); tmp.push_back(num[high]);
            if(s.find(tmp) == s.end()) {
              res.push_back(tmp);
              s.insert(tmp);
            }
            if(num[p] == num[p+1])
              p++;
            else if(num[q] == num[q-1])
              q--;
            else
              p++; // or q--;
          }
        }
      }
    }

    return res;
  }
};
