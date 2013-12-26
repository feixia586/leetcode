#include <cmath>

using namespace std;

class Solution {
public:
  int divide(int dividend, int divisor) {
    return method_1(dividend, divisor);
    // return method_2(dividend, divisor);
  }

  /************************************************************
   * Method 1
   ************************************************************/
  int method_1(int dividend, int divisor) {
    long long abs_dend = abs((long long)dividend);
    long long abs_dsor = abs((long long)divisor);

    long long res = 0;
    while (abs_dend >= abs_dsor) {
      long long tmp = abs_dsor;
      for (int i = 0; abs_dend >= tmp; i++, tmp <<= 1) {
        abs_dend -= tmp;
        res += (1 << i);
      }
    }

    return ((dividend ^ divisor) >> 31) ? -res : res;

  }
  /************************************************************
   * Method 2
   ************************************************************/
  int method_2(int dividend, int divisor) {
    long long abs_dend = abs((long long)dividend);
    long long abs_dsor = abs((long long)divisor);

    long long tmp_dend = abs_dend;
    long long tmp_dsor = abs_dsor;

    long long tmp = 1;
    while(tmp_dend > tmp_dsor) {
      tmp_dsor <<= 1;
      tmp <<= 1;
    }

    long long res = 0;
    if (tmp_dend == tmp_dsor) {
      res = tmp;
      return ((dividend ^ divisor) >> 31) ? -res : res;
    }

    while(tmp_dend >= abs_dsor) {
      tmp_dsor >>= 1;
      tmp >>= 1;

      // Don't forget the "if" condition here
      if(tmp_dend >= tmp_dsor) {
        res += tmp;
        tmp_dend -= tmp_dsor;
      }
    }

    return ((dividend ^ divisor) >> 31) ? -res : res;
  }

};
