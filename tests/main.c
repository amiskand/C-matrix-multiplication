#include "header.h"

/*

In C 

I am doing two types of matrix muliplication.
The first one is regular matrix multiplication.
The second is sparse matrix multiplication.

*/

int main(){

  //initializations
  char i = 2; //row index for matrix a and c
  char k = 3; //another index for matrix a and b
  char j = 4; //column index for matrix b and c

  char a[i][k];   //first matrix 
  char b[k][j];   //second matrix
  char c[i][j];  //result matrix

  timing(0);

  //computation
  for(){

    
    a[i][k] = rand();
    b[k][j] = rand();

//multiply then add the result to the previous result     
    c[i][j];

  }



//  c[i][k] =  mtrxMult(a,b,i,k,j);
//    free();
//  sparseMtrxMult();

  timing(1);

  printf("c(%d,%d):%c ", i,j,c[i][j]);  //display results

  printf("timing:");


  return 0;
}