#include <iostream>
#include "checkForSameNumber.h"

using namespace std;

const int SIZE_OF_SUDOKU = 9;

bool checkTheRowForSameElement(char** sudoku, int row, char num) {
	for (int j = 0; j < SIZE_OF_SUDOKU; j++) {
		if (sudoku[row][j] == num) {
			return false;
		}
	}
	return true;
}
bool checkTheColumnForSameElement(char** sudoku, int position, char num) {
	for (int i = 0; i < SIZE_OF_SUDOKU; i++) {
		if (sudoku[i][position] == num) {
			return false;
		}
	}
	return true;
}