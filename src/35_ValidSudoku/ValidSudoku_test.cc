#include "gtest/gtest.h"
#include "ValidSudoku.cc"
#include <iostream>

using namespace std;

void draw_pic(vector<vector<char> > &board) {
  int num = 9;
  for(int i = 0; i < num; i++)
    cout << " _";
  cout << endl;

  for (int i = 0; i < num; i++) {
    for (int j = 0; j < num; j++) {
      if (board[i][j] == '.')
        cout << "| ";
      else
        cout << "|" << board[i][j];
    }
    cout << "|" << endl;
    for (int i = 0; i < num; i++)
      cout <<" _";
    cout << endl;
  }

  }
TEST(ValidSudoku, TestA) {
  Solution sol;

  char row1[] = "..4...63."; char row2[] = ".........";
  char row3[] = "5......9."; char row4[] = "...56....";
  char row5[] = "4.3.....1"; char row6[] = "...7.....";
  char row7[] = "...5....."; char row8[] = ".........";
  char row9[] = ".........";
  vector<char> vec1(row1, row1+9);
  vector<char> vec2(row2, row2+9);
  vector<char> vec3(row3, row3+9);
  vector<char> vec4(row4, row4+9);
  vector<char> vec5(row5, row5+9);
  vector<char> vec6(row6, row6+9);
  vector<char> vec7(row7, row7+9);
  vector<char> vec8(row8, row8+9);
  vector<char> vec9(row9, row9+9);

  vector<vector<char> > board1;
  board1.push_back(vec1); board1.push_back(vec2);
  board1.push_back(vec3); board1.push_back(vec4);
  board1.push_back(vec5); board1.push_back(vec6);
  board1.push_back(vec7); board1.push_back(vec8);
  board1.push_back(vec9);

  draw_pic(board1);
  bool res1 = sol.isValidSudoku(board1);
  ASSERT_FALSE(res1);
}
