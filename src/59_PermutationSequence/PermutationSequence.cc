#include <string>
#include <cassert>

using namespace std;

class Solution {
public:
  string getPermutation(int n, int k) {
    assert(n >= 1);
    string str = "";
    for (int i = 1; i <= n; i++) str += (char)(i + '0');
    k--;
    for (int i = 0; i < n-1; i++) {
      int sub_num = fact(n-i-1);
      int sub = k / sub_num;
      k = k % sub_num;
      for (int j = i + sub; j > i; j--)
        swap(str[j], str[j-1]);
    }

    return str;
  }

  int fact(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
      res *= i;
    }
    return res;
  }
};
