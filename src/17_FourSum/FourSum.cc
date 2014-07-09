#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
  // need to optimize the lookup time to O(1)
  vector<vector<int> > fourSum(vector<int> &num, int target) {
    return method1(num, target);
  }

  /*******************************************************************
   * Method 1 -- recommended
   *******************************************************************/
  vector<vector<int> > method1(vector<int> &num, int target) {
    int size = num.size();
    vector<vector<int> > res;
    if (size < 4) {
      return res;
    }

    sort(num.begin(), num.end());
    for (int low = 0; low < size - 3; low++) {
      if (low > 0 && num[low] == num[low - 1]) { continue; }

      for (int high = size - 1; high > low + 2; high--) {
        if (high < size - 1 && num[high] == num[high + 1]) { continue; }

        int p = low + 1, q = high - 1;
        while (p < q) {
          int sum = num[low] + num[p] + num[q] + num[high];
          if (sum > target) {
            q--;
          } else if (sum < target) {
            p++;
          } else {
            vector<int> part;
            part.push_back(num[low]);
            part.push_back(num[p]);
            part.push_back(num[q]);
            part.push_back(num[high]);
            res.push_back(part);

            do { p++; } while (p < q && num[p] == num[p - 1]);
            do { q--; } while (p < q && num[q] == num[q + 1]);
          }
        }
      }
    }

    return res;
  }

  /*******************************************************************
   * Method 2 -- not efficient, there is look up time
   *******************************************************************/
  vector<vector<int> > method2(vector<int> &num, int target) {
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
            if(num[p] == num[p+1]) // it seems that this part is not necessary
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
