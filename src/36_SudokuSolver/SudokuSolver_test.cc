#include "gtest/gtest.h"
#include "SudokuSolver.cc"
#include <iostream>

using namespace std;

void draw_pic(const vector<vector<char> > &board) {
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
    for (int i = 0; i < num; i++) cout <<" _";
    cout << endl;
  }
}

void output_concise(const vector<vector<char> > &board) {
  int num = 9;
  for (int i = 0;  i < num; i++) {
    for (int j = 0; j < num; j++) {
      cout << board[i][j];
    }
    cout << ", ";
  }
  cout << endl;
}

vector<vector<char> > cst_bd1() {
  char row1[] = "..9748..."; char row2[] = "7........";
  char row3[] = ".2.1.9..."; char row4[] = "..7...24.";
  char row5[] = ".64.1.59."; char row6[] = ".98...3..";
  char row7[] = "...8.3.2."; char row8[] = "........6";
  char row9[] = "...2759..";
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

  return board1;
}
vector<vector<char> > cst_bd1_correct() {
  char row1[] = "519748632"; char row2[] = "783652419";
  char row3[] = "426139875"; char row4[] = "357986241";
  char row5[] = "264317598"; char row6[] = "198524367";
  char row7[] = "975863124"; char row8[] = "832491756";
  char row9[] = "641275983";
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

  return board1;
}

TEST(SudokuSolver, TestA) {
  Solution sol;

  vector<vector<char> > board1 = cst_bd1();
  cout << "Original Problem: " << endl;
  draw_pic(board1);

  cout << "Your answer: " << endl;
  sol.solveSudoku(board1);
  output_concise(board1);

  cout << "Correct answer: " << endl;
  vector<vector<char> > board1_correct = cst_bd1_correct();
  output_concise(board1_correct);

  cerr << "ATTENTION: Please Compare the Answers Yourself!!!" << endl;
}
