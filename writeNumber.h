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
* <Header file for the function that checks if it is possible to write a number in sudoku>
*
*/

#pragma once

void writeNumber(char** sudoku, int row, int position, char num, int& places, char** copySud);
int main();