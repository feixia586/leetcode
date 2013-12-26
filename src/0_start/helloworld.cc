#include "helloworld.h"

void HelloWorld::use_priority_queue() {
  cout << "Usage of priority queue:" << endl;
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
  cout << endl;
}

void HelloWorld::use_shift() {
  cout << "Usage of shift:" << endl;
  int a = -6;
  int lft_sft_a = a << 1;
  int rgt_sft_a = a >> 1;
  cout << a << ": left shift=" << lft_sft_a << "; right shift=" << rgt_sft_a << endl;
  ouput_binary(8, a); cout << "\t";
  ouput_binary(8, lft_sft_a); cout << "\t";
  ouput_binary(8, rgt_sft_a); cout << "\t";
  cout << endl;

  int b = -5;
  int lft_sft_b = b << 1;
  int rgt_sft_b = b >> 1;
  cout << b << ": left shift=" << lft_sft_b << "; right shift=" << rgt_sft_b << endl;
  ouput_binary(8, b); cout << "\t";
  ouput_binary(8, lft_sft_b); cout << "\t";
  ouput_binary(8, rgt_sft_b); cout << "\t";
  cout << endl;
}

void HelloWorld::ouput_binary(int n, int num) {
  std::bitset<8> x(num);
  std::cout << x;
}
