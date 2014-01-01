#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
  vector<string> anagrams(vector<string> &strs) {
    map<string, vector<string> > mp;
    vector<string> res;

    for (size_t i = 0; i < strs.size(); i++) {
      string tmp = strs[i];
      sort(tmp.begin(), tmp.end());
      mp[tmp].push_back(strs[i]);
    }

    map<string, vector<string> >::iterator it;
    for (it = mp.begin(); it != mp.end(); it++) {
      if (it->second.size() > 1) {
        for (size_t i = 0; i < it->second.size(); i++)
          res.push_back(it->second[i]);
      }
    }

    return res;
  }
};
