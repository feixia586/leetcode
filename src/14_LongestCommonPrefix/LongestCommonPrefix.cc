#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    int len = strs.size();
    if(len == 0)
      return "";

    return LCP(strs, 0, len-1);
  }

  string LCP(vector<string>& strs, int low, int high) {
    if (low == high)
      return strs[low];
    if (low == high-1) {
      //int p = 0;
      //while (strs[low][p] == strs[high][p]) p++;
      //return strs[low].substr(0, p);
      return get_com_prefix(strs[low], strs[high]);
    }

    int mid = (low + high) / 2;
    string str_left = LCP(strs, low, mid);
    string str_right = LCP(strs, mid+1, high);
    return get_com_prefix(str_left, str_right);
  }

  string get_com_prefix(string& str1, string& str2) {
    int p = 0;
    while (str1[p] == str2[p]) p++;
    return str1.substr(0, p);
  }
};
