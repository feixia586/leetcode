#include <string>
#include <vector>
#include <assert.h>

using namespace std;

class Solution {
public:
  string simplifyPath(string path) {
    assert(path[0] == '/');

    vector<string> stk;
    int len = path.length();
    int i = 0;
    while (i < len) {
      while(i < len && path[i] == '/') { i++; }
      if (i == len) { break; }

      int begin = i;
      while(i < len && path[i] != '/') { i++; }
      int end = i;
      string element = path.substr(begin, end - begin);
      if (element == ".") {
        continue;
      } else if (element == "..") {
        if (stk.size() > 0) {
          stk.pop_back();
        }
      } else {
        stk.push_back(element);
      }
    }

    if (stk.size() == 0) {
      return "/";
    }

    string res;
    for (int i = 0; i < (int)stk.size(); i++) {
      res += ("/" + stk[i]);
    }

    return res;
  }
};
