#pragma once

bool checkTheRowForSameElement(char** sudoku, int row, char num);
bool checkTheColumnForSameElement(char** sudoku, int position, char num);
bool check3x3(char** sudoku, int row, int position, char num);
bool checkAll(char** sudoku, int row, int position, char num);
int main();