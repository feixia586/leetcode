#include <iostream>
#include <unordered_map>

using namespace std;

struct Node {
  int key;
  int val;
  Node *prev;
  Node *next;

  Node(int key, int val) : key(key), val(val), prev(NULL), next(NULL) {}
};

class LRUCache{
private:
  int capacity;
  Node *head;
  Node *tail;
  unordered_map<int, Node*> myMap;
public:
  LRUCache(int capacity) {
    this->capacity = capacity;

    head = new Node(0, 0);
    tail = new Node(0, 0);
    head->next = tail;
    tail->prev = head;
  }

  int get(int key) {
    if (myMap.find(key) == myMap.end()) {
      return -1;
    }

    Node *node = myMap.find(key)->second;
    node->prev->next = node->next;
    node->next->prev = node->prev;
    moveToTail(node);

    return node->val;
  }

  void set(int key, int value) {
    if (get(key) != -1) {
      myMap.find(key)->second->val = value;
      return;
    }

    if ((int)myMap.size() == capacity) {
      Node *node = head->next;
      myMap.erase(node->key);
      head->next = node->next;
      head->next->prev = node->prev;
      delete node;
    }

    Node *newNode = new Node(key, value);
    myMap[key] = newNode;
    moveToTail(newNode);
  }

  void moveToTail(Node *node) {
    node->next = tail;
    node->prev = tail->prev;
    tail->prev->next = node;
    tail->prev = node;
  }
};
