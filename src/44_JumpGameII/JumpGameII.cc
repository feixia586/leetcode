#include <algorithm>

using namespace std;

class Solution {
public:
  int jump(int A[], int n) {
    //int minstep = n-1;
    //backtrack(A, n-1, 0, 0, minstep);
    //return minstep;

    // return DP(A, n);

    return greedy(A, n);
  }
  /***********************************************************************
   * Greedy algorithm method. Time O(n); Space O(1)
   ***********************************************************************/
  int greedy(int A[], int n) {
    int minstep = 0, ms_maxdis = 0, cur_maxdis = 0;

    for (int i = 0; i < n; i++) {
      // Actually, it is better to use i == ms_maxdis+1 here
      if (i > ms_maxdis) {
        minstep++;
        ms_maxdis = cur_maxdis;
      }
      cur_maxdis = max(cur_maxdis, i + A[i]);
    }

    if (ms_maxdis >= n-1) return minstep;
    else return -1;
    // Note: even the return is minstep, you cannot say there exists a
    // solution, for example, [3, 2, 1, 0, 4, 5]. So you cannot use this method
    // to determine whether there exists a solution. Good ways to do that --
    // 1) DP (see Jump Game)
    // 2) change (i>ms_maxdis) to (i==ms_maxdis+1), then remove redundant codes (see Jump Game)
  }

  /***********************************************************************
   * DP method -- worth to know this method
   ***********************************************************************/
  int DP(int A[], int n) {
    int* record = new int[n];
    for (int i = 0; i < n; i++) record[i] = n;

    record[0] = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < i; j++) {
        /* if(A[j] >= i - j)
           record[i] = record[i] < record[j] + 1 ? record[i] : record[j] + 1; */

        // the if method below can pass, the if method above cause TEL
        if (record[j] != n && A[j] >= i - j) {
          record[i] = record[j] + 1;
          break;
        }
      }
    }
    if (record[n-1] != n) return record[n-1];
    else return -1;
  }

  /***********************************************************************
   * DFS method -- Time out
   ***********************************************************************/
  void backtrack(int A[], int gap, int curpos, int curstep, int &minstep) {
    if (gap == 0) {
      minstep = minstep < curstep ? minstep : curstep;
      return;
    }

    for (int i = 1; i <= A[curpos]; i++) {
      if (i > gap)
        break;

      backtrack(A, gap-i, curpos+i, curstep+1, minstep);
    }
  }
};
