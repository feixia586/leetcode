#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


// Definition for undirected graph.
struct UndirectedGraphNode {
  int label;
  vector<UndirectedGraphNode *> neighbors;
  UndirectedGraphNode(int x) : label(x) {};
};

class Solution {
public:
  UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
    if (node == NULL) {
      return NULL;
    }

    vector<UndirectedGraphNode *> nodes;
    unordered_map<UndirectedGraphNode*, UndirectedGraphNode*> oldToNewMap;

    nodes.push_back(node);
    oldToNewMap[node] = new UndirectedGraphNode(node->label);

    // clone nodes
    size_t start = 0;
    while (start < nodes.size()) {
      UndirectedGraphNode *head = nodes[start++];
      for (size_t i = 0; i < head->neighbors.size(); i++) {
        UndirectedGraphNode *neighbor = head->neighbors[i];
        if (oldToNewMap.find(neighbor) == oldToNewMap.end()) {
          nodes.push_back(neighbor);
          oldToNewMap[neighbor] = new UndirectedGraphNode(neighbor->label);
        }
      }
    }

    // clone edges
    for (size_t i = 0; i < nodes.size(); i++) {
      UndirectedGraphNode *oldNode = nodes[i];
      for (size_t j = 0; j < oldNode->neighbors.size(); j++) {
        oldToNewMap.find(oldNode)->second->neighbors.push_back(oldToNewMap.find(oldNode->neighbors[j])->second);
      }
    }

    return oldToNewMap.find(nodes[0])->second;
  }
};
