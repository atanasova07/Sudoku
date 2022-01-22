/**
*
* Solution to course project # 6
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Adriana Atanasova
* @idnumber 6MI0600018
* @compiler VC
*
* <Function that print sudoku>
*
*/

#include <iostream>
#include "printSudoku.h"

using namespace std;

const int SIZE_OF_SUDOKU = 9;

void printSudoku(char** sudoku) {
	for (int i = 0; i < SIZE_OF_SUDOKU; i++) {
		for (int j = 0; j < SIZE_OF_SUDOKU; j++) {
			cout << sudoku[i][j] << " ";
		}
		cout << endl;
	}
}