#include <string>
#include <memory.h>

using namespace std;

class Solution {
public:
  string multiply(string num1, string num2) {
    int m = num1.length(), n = num2.length();
    int* product = new int[m+n];
    memset(product, 0, sizeof(int)*(m+n));

    // This is a normal method
    int tmp;
    for (int i = m-1; i >= 0; i--) {
      int carry = 0, j;
      for (j = n-1; j >= 0; j--) {
        tmp = (num1[i]-'0') * (num2[j]-'0') + product[i+j+1] + carry;
        product[i+j+1] = tmp % 10;
        carry = tmp / 10;
      }
      product[i+j+1] = carry;
    }

    string res = "";
    int i = 0;
    // If we use m+n instead of m+n-1 in the first while below,
    // we need add one line at the beginning: if (num1 == "0" || num2 == "0") return "0";
    while (i < m+n-1 && product[i] == 0) i++;
    while (i < m+n) res.push_back('0' + product[i++]);

    return res;
  }
};
