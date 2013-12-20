#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    int len = strs.size();
    if(len == 0)
      return "";

    // return LCP(strs, 0, len-1);
    return go_through(strs);
  }

  /*************************************************************
   * Divide and Conquer Method
   *************************************************************/
  string LCP(vector<string>& strs, int low, int high) {
    if (low == high)
      return strs[low];
    if (low == high-1) {
      return get_com_prefix(strs[low], strs[high]);
    }

    int mid = (low + high) / 2;
    string str_left = LCP(strs, low, mid);
    string str_right = LCP(strs, mid+1, high);
    return get_com_prefix(str_left, str_right);
  }

  string get_com_prefix(string& str1, string& str2) {
    size_t p = 0;
    while (p < str1.length() && p < str2.length()) {
      if (str1[p] == str2[p]) p++;
      else break;
    }
    return str1.substr(0, p);
  }

  /*************************************************************
   * Most Suitable Method
   *************************************************************/
  string go_through(vector<string>& strs) {
    if (strs.size() == 1)
      return strs[0];

    string res = strs[0];
    for (size_t i = 1; i < strs.size(); i++) {
      res = get_com_prefix(res, strs[i]);
    }
    return res;
  }

};
