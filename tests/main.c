#include "header.h"

/*

Antonious Iskander

In C 

I am doing two types of matrix muliplication.
The first one is regular matrix multiplication.
The second is sparse matrices.

I want to reduce memory footprint cpu usage as much as possible.

*/

int main(){

  //initializations
  //I used char data type because I didn't want to use a size bigger than 128
//  char m = 2; //row size for matrix a and c
//  char n = 3; //another size for matrix a and b
//  char p = 4; //column size for matrix b and c

  char a[M][N];   //first matrix 
  char b[N][P];   //second matrix
  int c[M][P];  //result matrix

  //loop variables i,k,j
  //they are unsigned variables because we don't want negative indices
  unsigned char i = 0;  //row index for matrix a and c
  unsigned char k = 0;  //another index for matrix a and b
  unsigned char j = 0;  //column index for matrix b and c
  
  char start, end;  //timing variables used for computations

  //initialize all matrices
  zeroMatrix(a,b,c,i,j,k);

  //assign variables to matrices a and b
  varMatrix(a,b,i,j,k);

  start = timing(0);  //start timing

  //compute
  mtrxMult(a,b,c,i,j,k);  
  
  end = timing(1);   //end timing

  printf("\ntime it took %d s\n", end - start);  //displaying length of time the program took to run
  

  return 0;
}