#include <vector>
#include <algorithm>

using namespace std;

// Definition for an interval.
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
  static bool mycomp (const Interval& a, const Interval& b) { return a.start < b.start; }
  vector<Interval> merge(vector<Interval> &intervals) {
    vector<Interval> res;
    if (intervals.empty()) return res;

    sort(intervals.begin(), intervals.end(), mycomp);
    res.push_back(intervals[0]);
    for (size_t i = 1; i < intervals.size(); i++) {
      if (intervals[i].start > res.back().end)
        res.push_back(intervals[i]);
      else {
        res.back().end = max(res.back().end, intervals[i].end);
      }
    }

    return res;
  }
};
