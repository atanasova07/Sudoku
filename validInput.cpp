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
* <Function that check for valid input values>
*
*/

#include <iostream>
#include "validInput.h"

using namespace std;

const int MIN_ROW_POSITION = 0;
const int MAX_ROW_POSITION = 8;

bool isValidInput(int row, int position, char num) {
	if (num < '0' || num > '9') {
		return false;
	}
	if (row < MIN_ROW_POSITION || row > MAX_ROW_POSITION || position < MIN_ROW_POSITION || position > MAX_ROW_POSITION) {
		return false;
	}
	return true;
}
