#ifndef HEADER_H

#define HEADER_H

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

//these can't be more than 127 because of data types assigned to matrices and other variables
#define M 127 //row size for matrix a and c
#define N 127 //another size for matrix a and b
#define P 127 //column size for matrix b and c

bool zeroMatrix(char a[][N], char b[][P], int c[][P], unsigned char i, unsigned char j, unsigned char k);
bool varMatrix(char a[][N], char b[][P], unsigned char i, unsigned char j, unsigned char k);

char timing(bool var);

//char[][] sparseMtrxMult();
bool mtrxMult(char a[][N], char b[][P], int c[][P], unsigned char i, unsigned char j, unsigned char k);

#endif