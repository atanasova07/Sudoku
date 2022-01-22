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
* <Copy the original sudoku - without modifications>
*
*/

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