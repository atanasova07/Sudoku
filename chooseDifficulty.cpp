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
* <Function for choosing the difficulty of the game>
*
*/

#include <iostream>
#include "chooseDifficulty.h"
#include "easy.h"
#include "medium.h"
#include "hard.h"
#include "copySudoku.h"
using namespace std;

const int SIZE_OF_SUDOKU = 9;

void chooseDifficulty(char** sudoku, int N, char** copySud) {
	while (N < 1 || N > 3) {
		cout << "Please choose between 1 to 3!" << endl;
		cin >> N;
	}
	switch (N)
	{
	case 1:
		cout << "Here is your sudoku:" << endl;
		easyFile(sudoku);
		copySudoku(sudoku, copySud);
		break;
	case 2:
		cout << "Here is your sudoku:" << endl;
		mediumFile(sudoku);
		copySudoku(sudoku, copySud);
		break;
	case 3:
		cout << "Here is your sudoku:" << endl;
		hardFile(sudoku);
		copySudoku(sudoku, copySud);
		break;
	}
}