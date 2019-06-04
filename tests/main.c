#include "header.h"

/*

Antonious Iskander

In C 

I am doing two types of matrix muliplication.
The first one is regular matrix multiplication.
The second is sparse matrices.

*/

int main(){

  //initializations
  unsigned char i = 2; //row index for matrix a and c
  unsigned char k = 3; //another index for matrix a and b
  unsigned char j = 4; //column index for matrix b and c

  char a[i][k];   //first matrix 
  char b[k][j];   //second matrix
  char c[i][j];  //result matrix

  long int start, end;  //timing variables to compute length of time

  start = timing(0);  //start timing

  //computation
  for(){

    
    a[i][k] = rand();

    printf("a(%d,%d):%c ", i,k,a[i][k]);  //display first matrix

    b[k][j] = rand();

    printf("b(%d,%d):%c ", k,j,c[k][j]);  //display second matrix


//multiply then add the result to the previous result     
    c[i][j];

    printf("c(%d,%d):%c ", i,j,c[i][j]);  //display results

  }



//  c[i][k] =  mtrxMult(a,b,i,k,j);
//    free();
//  sparseMtrxMult();



  end = timing(1);   //end timing

  printf("time it took %ld s\n", end - start);  //displaying length of time the program took to run


  return 0;
}