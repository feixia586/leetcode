#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <queue>
#include <iostream>
#include <bitset>

using namespace std;

struct mycomparison {
  bool reverse;
  mycomparison(const bool& rev_param = false) { reverse = rev_param; };

/*The expression comp(a,b), where comp is an object of this type and a and b are elements in the container, shall return true if a is considered to go before b in the strict weak ordering the function defines.*/
  bool operator() (const int& lhs, const int& rhs) const {
    if (reverse) return (lhs > rhs);
    else return (lhs < rhs);
  }
};
typedef priority_queue<int, vector<int>, mycomparison> int_pq;

class HelloWorld {
public:
  void use_priority_queue();
  void use_shift();
  void ouput_binary(int n, int num);
};

#endif
