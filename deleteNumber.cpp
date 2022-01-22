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
* <Function that check if it is possible to delete a number>
*
*/

#include <iostream>
#include "deleteNumber.h"

using namespace std;

const int SIZE_OF_SUDOKU = 9;

bool isItPossibleToDeleteElement(char** sudoku, char** copySud, int row, int position) {
	if (copySud[row][position] >= '1' && copySud[row][position] <= '9') {
		return false;
	}
	if (sudoku[row][position] >= '1' && sudoku[row][position] <= '9') {
		return true;
	}
	return false;
}
