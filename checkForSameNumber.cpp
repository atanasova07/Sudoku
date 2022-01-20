#include <iostream>
#include "checkForSameNumber.h"

using namespace std;

const int SIZE_OF_SUDOKU = 9;
const int SIZE_OF_3X3 = 3;

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

bool check3x3(char** sudoku, int row, int position, char num) {
	int row3x3 = row - row % SIZE_OF_3X3;
	int column3x3 = position - position % SIZE_OF_3X3;
	for (int i = row3x3; i < row3x3 + SIZE_OF_3X3; i++) {
		for (int j = column3x3; j < column3x3 + SIZE_OF_3X3; j++) {
			if (sudoku[i][j] == num) {
				return false;
			}
		}
	}
	return true;
}

bool checkAll(char** sudoku, int row, int position, char num) {
	if (check3x3(sudoku, row, position, num)) {
		if (checkTheColumnForSameElement(sudoku, position, num)) {
			if (checkTheRowForSameElement(sudoku, row, num)) {
				return true;
			}
		}
	}
	return false;
}
