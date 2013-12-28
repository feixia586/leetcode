#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
  vector<vector<int> > combinationSum2(vector<int> &num, int target) {
    sort(num.begin(), num.end());
    vector<int> chosen;
    vector<vector<int> > res;
    set<vector<int> > res_set;

    backtrack(num, target, 0, chosen, res, res_set);
    return res;
  }

  void backtrack(vector<int> num, int diff, int start, vector<int> &chosen, vector<vector<int> > &res, set<vector<int> > &res_set ) {
    if (diff == 0) {
      if (res_set.find(chosen) == res_set.end()) {
        res.push_back(chosen);
        res_set.insert(chosen);
      }
      return;
    }

    for (size_t i = start; i < num.size(); i++) {
      if (diff < num[i])
        return;

      chosen.push_back(num[i]);
      backtrack(num, diff-num[i], i+1, chosen, res, res_set);
      chosen.pop_back();
    }
  }
};
