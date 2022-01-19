#include <iostream>
#include <fstream>
#include "copySudoku.h"
using namespace std;

const int SIZE_OF_SUDOKU = 9;

void copySudoku(char** const sudoku, char** copySud) {
	for (int i = 0; i < SIZE_OF_SUDOKU; i++)
	{
		for (int j = 0; j < SIZE_OF_SUDOKU; j++)
		{
			copySud[i][j] = sudoku[i][j];
		}
	}
}