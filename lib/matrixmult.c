/*
  I am computing two matrices with elements psuedorandomly 
  choosen by this program, specifically the C library.

*/

#include "header.h"

char* mtrxMult(char a, char b, char i, char k, char j){

  //initializations
//  char i = 2; //row index for matrix a and c
//  char k = 3; //another index for matrix a and b
//  char j = 4; //column index for matrix b and c
  char x = 0; //element for matrix a
  char y = 0; //element for matrix b
  srand(time(NULL));

 
//  char a[i][k];   //first matrix 
//  char b[k][j];   //second matrix
  char c[i][j];   //result matrix


//would it be faster if I first populated the matrix then compute?
//or do i reuse x for both matrices? 
//or do i save rand() directly into matrix without variables?

//  malloc();

  //computation
  for(){

    x = rand();
    a[i][k] = x;
    x = rand();
    b[k][j] = x;

//multiply then add the result to the previous result     
    c[i][j]

  }


//  printf("%c ", c[i][j]);  //display results
  

}