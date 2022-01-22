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
* <Header file for checking the rules for repeatin number in row, column, 3x3 square>
*
*/

#pragma once

bool checkTheRowForSameElement(char** sudoku, int row, char num);
bool checkTheColumnForSameElement(char** sudoku, int position, char num);
bool check3x3(char** sudoku, int row, int position, char num);
bool checkAll(char** sudoku, int row, int position, char num);
int main();