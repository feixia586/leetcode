#include <vector>
#include <string>

using namespace std;

class Solution {
public:
  vector<string> fullJustify(vector<string> &words, int L) {
    vector<string> res;
    if (words.size() == 0) {
      return res;
    }

    int size = words.size();
    int i = 0, j = 0;
    while (i < size) {
      int crntLen = 0;

      while (j < size && crntLen + (int)words[j].length() <= L) {
        crntLen += (words[j].length() + 1);
        j++;
      }

      // if only one word
      if (j - i == 1) {
        int extraSpace = L - words[i].size();
        appendSpace(words[i], extraSpace);
        res.push_back(words[i]);
        i = j;
      } else if (j < size) {
        int chLen = crntLen - (j - i);
        int meanSpace = (L - chLen) / (j - i - 1);
        int leftSpace = (L - chLen) % (j - i - 1);
        string line;
        for (int k = i; k < j - 1; k++) {
          line += words[k];
          appendSpace(line, meanSpace);
          if (leftSpace > 0) {
            line.push_back(' ');
            leftSpace--;
          }
        }
        line += words[j - 1];
        res.push_back(line);
        i = j;
      } else {
        int chLen = crntLen - (j - i);
        int meanSpace = 1;
        int leftSpace = L - chLen - (j - i - 1);
        string line;
        for (int k = i; k < j - 1; k++) {
          line += words[k];
          appendSpace(line, meanSpace);
        }
        line += words[j - 1];
        appendSpace(line, leftSpace);
        res.push_back(line);
        i = j;
      }
    }

    return res;
  }

  void appendSpace(string &str, int count) {
    for (int i = 0; i < count; i++) {
      str.push_back(' ');
    }
  }
};
