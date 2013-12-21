#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
  vector<vector<int> > threeSum(vector<int> &num) {
    // return naive_method(num);
    return sortAndsolve(num);
  }
  /************************************************************
   * Sort first Method (Recommended). Time O(n^2)
   ************************************************************/
  vector<vector<int> > sortAndsolve(vector<int>& num) {
    sort(num.begin(), num.end());

    vector<vector<int> > res;
    set<vector<int> > s;
    int len = num.size();
    for (int low = 0; low < len-2; low++) {
      int high = len - 1;
      int p = low + 1;
      while(p < high) {
        int sum = num[low] + num[p] + num[high];
        if(sum > 0)
          high--;
        else if (sum < 0)
          p++;
        else {
          vector<int> tmp;
          tmp.push_back(num[low]);
          tmp.push_back(num[p]);
          tmp.push_back(num[high]);
          if (s.find(tmp) == s.end()) {
            res.push_back(tmp);
            s.insert(tmp);
          }
          if (num[p] == num[p+1])
            p++;
          else if (num[high] == num[high-1])
            high--;
          else
            p++; // or high--;
        }
      }
    }

    return res;
  }


  /************************************************************
   * Naive Method. Time O(n^3)
   ************************************************************/
  vector<vector<int> > naive_method(vector<int>& num) {
    // Assume the length >= 3
    int len = num.size();
    vector<vector<int> > res;
    set<vector<int> > s;
    for (int a = 0; a < len - 2; a++) {
      for (int b = a+1; b < len - 1; b++) {
        for (int c = b+1; c < len; c++) {
          if(num[a] + num[b] + num[c] == 0) {
            vector<int> tmp = form_vector(num, a, b, c);
            if (s.find(tmp) == s.end()) {
              res.push_back(tmp);
              s.insert(tmp);
            }
          }
        }
      }
    }

    return res;
  }
  vector<int> form_vector(vector<int>& num, int a, int b, int c) {
    int p[3] = {num[a], num[b], num[c]};
    for (int i = 0; i < 3; i++) {
      for (int j = i; j < 3; j++) {
        if (p[i] > p[j]) {
          int tmp = p[i];
          p[i] = p[j];
          p[j] = tmp;
        }
      }
    }

    vector<int> vec;
    for(int i = 0; i < 3; i++) {
      vec.push_back(p[i]);
    }

    return vec;
  }
};
