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
