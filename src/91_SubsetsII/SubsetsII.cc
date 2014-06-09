#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
   vector<vector<int> > subsetsWithDup(vector<int> &S) {
        vector<vector<int> > res;
        vector<int> sub;

        if (S.size() == 0) {
            return res;
        }

        sort(S.begin(), S.end());
        subWithDupHelper(res, sub, S, 0);
        return res;
    }

    void subWithDupHelper(vector<vector<int> > &res, vector<int> &sub, vector<int> &S, int pos) {
        res.push_back(sub);

        int size = S.size();
        for (int i = pos; i < size; i++) {
            if (i != pos && S[i] == S[i-1]) {
                continue;
            }
            sub.push_back(S[i]);
            subWithDupHelper(res, sub, S, i+1);
            sub.pop_back();
        }
    }
};
