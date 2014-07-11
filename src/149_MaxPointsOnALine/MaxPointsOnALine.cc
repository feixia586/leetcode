#include <vector>
#include <unordered_map>
#include <algorithm>
#include <climits>
#include <limits>

using namespace std;


// Definition for a point.
struct Point {
  int x;
  int y;
  Point() : x(0), y(0) {}
  Point(int a, int b) : x(a), y(b) {}
};

// bool compfunc(Point p1, Point p2) {
//   return p1.x < p2.x;
// }
struct CompSt {
  bool operator() (Point p1, Point p2) { return p1.x < p2.x; }
};

class Solution {
public:
  int maxPoints(vector<Point> &points) {
    int size = points.size();
    if (size == 0) {
      return 0;
    }

    CompSt compobj;
    sort(points.begin(), points.end(), compobj);

    int res = 1;
    unordered_map<double, int> umap;
    for (int i = 0; i < size; i++) {
      Point p1 = points[i];
      umap.clear();

      int samePos = 0;
      int thisMax = 1;
      for (int j = i + 1; j < size; j++) {
        Point p2 = points[j];

        // check if same position
        if (p1.x == p2.x && p1.y == p2.y) {
          samePos++;
          continue;
        }

        double slope = numeric_limits<double>::infinity();
        if (p1.x != p2.x) {
          slope = (p2.y - p1.y) / (double)(p2.x - p1.x);
        }

        int tmp;
        if (umap.find(slope) == umap.end()) {
          umap[slope] = 2;
          tmp = 2;
        } else {
          tmp = ++umap[slope];
        }
        thisMax = max(thisMax, tmp);
      }

      res = max(thisMax + samePos, res);
    }

    return res;
  }
};
