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
* <Function that read from file - open and print easy sudoku>
*
*/


#include <iostream>
#include <fstream>
#include "easy.h"
using namespace std;

const int SIZE_OF_SUDOKU = 9;

void easyFile() {
		ifstream input;
		int random;
		srand(time(0));
		random = 1 + (rand() % 10);
		char sudoku[SIZE_OF_SUDOKU][SIZE_OF_SUDOKU];
		switch (random) {
		case 1: input.open("easy//1.txt");
			break;
		case 2: input.open("easy//2.txt");
			break;
		case 3: input.open("easy//3.txt");
			break;
		case 4: input.open("easy//4.txt");
			break;
		case 5: input.open("easy//5.txt");
			break;
		case 6: input.open("easy//6.txt");
			break;
		case 7: input.open("easy//7.txt");
			break;
		case 8: input.open("easy//8.txt");
			break;
		case 9: input.open("easy//9.txt");
			break;
		case 10: input.open("easy//10.txt");
			break;
		}
		for (int i = 0; i < SIZE_OF_SUDOKU; i++) {
			for (int j = 0; j < SIZE_OF_SUDOKU; j++) {
				input >> sudoku[i][j];
			}
		}
		input.close();
		for (int i = 0; i < SIZE_OF_SUDOKU; i++) {
			for (int j = 0; j < SIZE_OF_SUDOKU; j++) {
				cout << sudoku[i][j] << " ";
			}
			cout << endl;
		}
	}