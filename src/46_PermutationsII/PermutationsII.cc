#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
  vector<vector<int> > permuteUnique(vector<int> &num) {
    vector<vector<int> > res;
    vector<int> perm;

    if (num.size() == 0) {
      return res;
    }

    vector<int> visited(num.size(), 0);
    sort(num.begin(), num.end());
    permuteUniqueHelper(res, perm, num, visited);
    return res;
  }

  void permuteUniqueHelper(vector<vector<int> > &res, vector<int> &perm,
                           vector<int> &num, vector<int> &visited) {
    if (perm.size() == num.size()) {
      res.push_back(perm);
      return;
    }

    int size = num.size();
    for (int i = 0; i < size; i++) {
      if (visited[i] == 1 || (i != 0 && num[i-1] == num[i] && visited[i-1] == 0)) {
        continue;
      }

      perm.push_back(num[i]);
      visited[i] = 1;
      permuteUniqueHelper(res, perm, num, visited);
      perm.pop_back();
      visited[i] = 0;
    }
  }
};
