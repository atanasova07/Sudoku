#include <iostream>
#include <fstream>
#include "hard.h"
using namespace std;

const int SIZE_OF_SUDOKU = 9;

void hardFile(char** sudoku) {
	ifstream input;
	int random;
	srand(time(0));
	random = 1 + (rand() % 10);
	switch (random) {
	case 1: input.open("hard//1.txt");
		break;
	case 2: input.open("hard//2.txt");
		break;
	case 3: input.open("hard//3.txt");
		break;
	case 4: input.open("hard//4.txt");
		break;
	case 5: input.open("hard//5.txt");
		break;
	case 6: input.open("hard//6.txt");
		break;
	case 7: input.open("hard//7.txt");
		break;
	case 8: input.open("hard//8.txt");
		break;
	case 9: input.open("hard//9.txt");
		break;
	case 10: input.open("hard//10.txt");
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
