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
* <this file checks if it is possible to write a number in sudoku>
*
*/

#include <iostream>
#include "writeNumber.h"
#include "validInput.h"
#include "checkForSameNumber.h"
#include "deleteNumber.h"
#include "printSudoku.h"

using namespace std;

void writeNumber(char** sudoku, int row, int position, char num, int& places, char** copySud) {
	if (num == '0') {
		if (isItPossibleToDeleteElement(sudoku, copySud, row, position)) {
			sudoku[row][position] = '_';
			places++;
			printSudoku(sudoku);
			cout << endl;
		}
		else if (sudoku[row][position] == '_') {
			cout << "There is nothing to delete in position " << row << " " << position << "." << endl << endl;
		}
		else {
			cout << "Invalid move. You cannot change the original numbers." << endl << endl;
		}
	}
	else {
		if (isValidInput(row, position, num) && checkAll(sudoku, row, position, num))
		{
			if (sudoku[row][position] >= '1' && sudoku[row][position] <= '9') {
				cout << "If you want to delete this number, enter row, position, 0 and then you can enter the number you wanted." << endl << endl;
			}
			else {
				sudoku[row][position] = num;
				places--;
				printSudoku(sudoku);
				cout << endl;
			}
		}
		else if (isValidInput(row, position, num) == false) {
			cout << "Please enter positive number between 1-9 (0 for deleting) for number and 0-8 for row and column." << endl << endl;
		}
		else {
			cout << "Invalid move. " << num - 48 << " cannot be written in position " << row << " " << position << "." << endl << endl;
		}
	}
}