#include <string>
#include <vector>
#include <map>
#include <cassert>

using namespace std;

class Solution {
public:
  vector<int> findSubstring(string S, vector<string> &L) {
    // Note that toFind["sth"] has been auto-initied to 0
    assert(L.size() > 0);

    vector<int> res;
    map<string, int> toFind;
    map<string, int> Found;
    int M = L.size();
    int N = L[0].size();

    // toFind["sth"] isn't necessarily equal to 0
    for (int i = 0; i < M; i++) toFind[L[i]]++;

    int bound = S.length() - M * N + 1;
    for (int i = 0; i < bound; i++) {
      Found.clear();
      int j = 0;
      for (j = 0; j < M; j++) {
        string substr = S.substr(i+N*j, N);
        if (toFind.find(substr) == toFind.end()) break;
        else if (Found[substr] >= toFind[substr]) break;
        Found[substr]++;
      }

      if (j == M)
        res.push_back(i);
    }

    return res;
  }
};
