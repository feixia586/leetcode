#include <vector>

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
  vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
    vector<Interval> res;

    int size = intervals.size();
    int i = 0;
    while(i < size && newInterval.start > intervals[i].end) {
      res.push_back(intervals[i++]);
    }
    res.push_back(newInterval);

    while (i < size && intervals[i].start <= newInterval.end) {
      res.back().start = min(res.back().start, intervals[i].start);
      res.back().end = max(res.back().end, intervals[i].end);
      i++;
    }

    while (i < size) res.push_back(intervals[i++]);

    return res;
  }
};
