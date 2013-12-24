#include "helloworld.h"

void HelloWorld::use_priority_queue() {
    int val[] = {0, 50, 40, 10};
    int_pq inc_order(true);
    int_pq dec_order;
    for (int i = 0; i < 4; i++) {
      inc_order.push(val[i]);
      dec_order.push(val[i]);
    }

    while (!inc_order.empty())
    { cout << inc_order.top() << " "; inc_order.pop(); }
    cout << endl;
    while(!dec_order.empty())
    { cout << dec_order.top() << " "; dec_order.pop(); }
  }
