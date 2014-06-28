#include <string>
#include <vector>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

using namespace std;

struct Node {
  int num;
  string val;
  vector<Node *> prev;

  Node(int num, string val) : num(num), val(val) {}
};

class Solution {
public:
  vector<vector<string> > findLadders(string start, string end, unordered_set<string> &dict) {
    vector<vector<string> > res;

    if (dict.size() == 0) {
      return res;
    }

    queue<Node *> que;
    Node *startNode = new Node(0, start);
    que.push(startNode);
    unordered_map<string, Node *> myMap;
    myMap[start] = startNode;

    bool stop = false;

    while(!que.empty() && !stop) {
      int size = que.size();
      for (int i = 0; i < size; i++) {
        Node *node = que.front();
        que.pop();

        for (size_t j = 0; j < node->val.length(); j++) {
          for (char c = 'a'; c <= 'z'; c++) {
            if (node->val[j] == c) {
              continue;
            }

            string newStr = replace(node->val, j, c);
            if (dict.find(newStr) != dict.end()) {
              unordered_map<string, Node *>::iterator it = myMap.find(newStr);
              if (it == myMap.end()) {
                Node *newNode = new Node(node->num + 1, newStr);
                newNode->prev.push_back(node);
                myMap[newStr] = newNode;

                que.push(newNode);
                if (newStr == end) {
                  stop = true;
                }
              } else {
                if (it->second->num == node->num + 1) {
                  it->second->prev.push_back(node);
                }
              }
            }
          }
        }
      }
    }

    if (stop) {
      vector<string> path(1, end);
      findPaths(res, path, myMap[end], start);
      for (size_t i = 0; i < res.size(); i++) {
        reverse(res[i].begin(), res[i].end());
      }
    }

    // release memory
    for (auto it = myMap.begin(); it != myMap.end(); it++) {
      delete it->second;
    }

    return res;
  }

  void findPaths(vector<vector<string> > &res, vector<string> &path, Node* node, string start) {
    if (node->val == start) {
      res.push_back(path);
      return;
    }

    int size = node->prev.size();
    for (int i = 0; i < size; i++) {
      path.push_back(node->prev[i]->val);
      findPaths(res, path, node->prev[i], start);
      path.pop_back();
    }
  }

  string replace(string str, size_t i, char c) {
    string res = str;
    res[i] = c;
    return res;
  }
};
