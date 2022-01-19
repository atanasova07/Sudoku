#include <iostream>
#include "placesToWrite.h"
using namespace std;

const int SIZE_OF_SUDOKU = 9;

int placesToWrite(char** copySud) {
	int places = 0;
	for (int i = 0; i < SIZE_OF_SUDOKU; i++)
	{
		for (int j = 0; j < SIZE_OF_SUDOKU; j++)
		{
			if (copySud[i][j] == '_') {
				places++;
			}
		}
	}
	return places;
}