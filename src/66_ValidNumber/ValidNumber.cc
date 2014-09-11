#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

class Solution {
public:
  // AeB代表A * 10 ^ B
  // A可以是小数也可以是整数，可以带正负号
  // .35, 00.神马的都算valid小数；就”.”单独一个不算
  // B必须是整数，可以带正负号
  // 有e的话，A,B就必须同时存在

  // reg exp: reg = "( )*[-+]?(\\d+\\.?|\\.\\d+)\\d*(e[-+]?\\d+)?( )*"
  bool isNumber(const char *s) {
    string str = trim(s);

    // skip the beginning + or -
    int p = 0;
    if (str[p] == '+' || str[p] == '-') {
      p++;
    }
    str = str.substr(p);

    int dotPos = -1, ePos = -1;
    int len = str.length();
    for (int i = 0; i < len; i++) {
      if (dotPos == -1 && str[i] == '.') {
        dotPos = i;
      } else if (ePos == -1 && (str[i] == 'e' || str[i] == 'E')) {
        ePos = i;
        if (i + 1 < len && (str[i+1] == '+' || str[i+1] == '-')) {
          i++;
        }
      } else {
        if (str[i] >= '0' && str[i] <= '9') {
          continue;
        } else {
          return false;
        }
      }
    }

    //xxx.xxExx
    string startStr, midStr, endStr;
    if (dotPos == -1 && ePos == -1) {   // xxx
      startStr = str;
      if (startStr.length() < 1) {
        return false;
      }
    } else if (dotPos != -1 && ePos == -1) { // xxx.xx
      startStr = str.substr(0, dotPos);
      midStr = str.substr(dotPos +  1);
      if (startStr.length() < 1 && midStr.length() < 1) {
        return false;
      }
    } else if (dotPos == -1 && ePos != -1) { // xxxExx
      startStr = str.substr(0, ePos);
      endStr = str.substr(ePos + 1);
      if (endStr.length() > 0 && (endStr[0] == '+' || endStr[0] == '-')) {
        endStr = endStr.substr(1);
      }

      if (startStr.length() < 1 || endStr.length() < 1) {
        return false;
      }

    } else if (dotPos != -1 && ePos != -1) { //xxx.xxExx
      if (dotPos >= ePos) {
        return false;
      }
      startStr = str.substr(0, dotPos);
      midStr = str.substr(dotPos + 1, ePos - dotPos - 1);
      endStr = str.substr(ePos + 1);
      if (endStr.length() > 0 && (endStr[0] == '+' || endStr[0] == '-')) {
        endStr = endStr.substr(1);
      }

      if ((startStr.length() < 1 && midStr.length() < 1) || endStr.length() < 1) {
        return false;
      }
    }

    return true;
  }

  string trim(const char *s) {
    string str(s);

    int i = 0, len = str.length();
    while (i < len && str[i] == ' ') { i++; }
    str = str.substr(i);
    while (str.back() == ' ') { str.pop_back(); }

    return str;
  }

  /***************************************************************************
   * Java Regular Expression Method
   ***************************************************************************/
  /*
   * String reg = "( )*[-+]?(\\d+\\.?|\\.\\d+)\\d*(e[-+]?\\d+)?( )*";
   *    if (s.matches(reg)) {
   *        return true;
   *    } else {
   *        return false;
   *    }
   */
};
