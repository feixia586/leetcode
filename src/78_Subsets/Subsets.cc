#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
  vector<vector<int> > subsets(vector<int> &S) {
    vector<vector<int> > result;
    vector<int> sub;

    if (S.size() == 0) {
      return result;
    }

    sort(S.begin(), S.end());
    subsetsHelper(result, sub, S, 0);
    return result;
  }

  void subsetsHelper(vector<vector<int> > &result, vector<int> &sub, vector<int> &S, int pos) {
    result.push_back(sub);

    for (size_t i = pos; i < S.size(); i++) {
      sub.push_back(S[i]);
      subsetsHelper(result, sub, S, i + 1);
      sub.pop_back();
    }
  }

};
