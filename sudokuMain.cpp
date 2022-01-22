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
* <Main function>
*
*/

#include <iostream>
#include <fstream>
#include "easy.h"
#include "medium.h"
#include "hard.h"
#include "copySudoku.h"
#include "placesToWrite.h"
#include "chooseDifficulty.h"
#include "checkForSameNumber.h"
#include "printSudoku.h"
#include "deleteNumber.h"
#include "validInput.h"
#include "writeNumber.h"

using namespace std;

const int SIZE_OF_SUDOKU = 9;
const int SIZE_OF_3X3 = 3;

int main() {
	ifstream input;
	int N;
	cout << "Choose difficulty to play: 1 - easy, 2 - medium, 3 - hard" << endl;
	cin >> N;

	char** sudoku = new char* [SIZE_OF_SUDOKU];
	for (int i = 0; i < SIZE_OF_SUDOKU; i++) {
		sudoku[i] = new char[SIZE_OF_SUDOKU];
	}

	char** copySud = new char* [SIZE_OF_SUDOKU];
	for (int i = 0; i < SIZE_OF_SUDOKU; i++) {
		copySud[i] = new char[SIZE_OF_SUDOKU];
	}

	chooseDifficulty(sudoku, N,copySud);
	copySudoku(sudoku,copySud);
	int placesToWriteNumber = placesToWrite(copySud);
	int row = 0;
	int position = 0;
	char number;
	cout << endl;
	cout << "If you want to delete a number, enter row, position, 0 (null)!" << endl << endl;
	cout << "Enter row, positon, number" << endl;
	while (placesToWriteNumber > 0) {
		cin >> row;
		cin >> position;
		cin >> number;
		writeNumber(sudoku, row, position, number, placesToWriteNumber, copySud);
		if (placesToWriteNumber == 0) {
			cout << "Congratulation!" << endl;
			return 0;
		}
		else {
			cout << "Enter row, positon, number" << endl;
		}
	}

	for (int i = 0; i < SIZE_OF_SUDOKU; i++) {
		delete[] copySud[i];
	}
	delete[] copySud;
	for (int i = 0; i < SIZE_OF_SUDOKU; i++) {
		delete[] sudoku[i];
	}
	delete[] sudoku;
}