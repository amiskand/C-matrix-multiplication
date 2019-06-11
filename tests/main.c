#include "header.h"

/*

Antonious Iskander

In C 

I am doing two types of matrix muliplication.
The first one is regular matrix multiplication.
The second is sparse matrices.

I want to reduce memory footprint as much as possible and reduce cpu usage as much as possible.


*/

int main(){

  //initializations
  //I used char data type because I didn't want to use a size bigger than 128
  char m = 2; //row size for matrix a and c
  char n = 3; //another size for matrix a and b
  char p = 4; //column size for matrix b and c


  char a[m][n];   //first matrix 
  char b[n][p];   //second matrix
  short c[m][p];  //result matrix


  //loop variables i,k,j
  //they unsigned variables because we don't want negative indices
  unsigned char i = 0;  //row index for matrix a and c
  unsigned char k = 0;  //another index for matrix a and b
  unsigned char j = 0;  //column index for matrix b and c
  
  char start, end;  //timing variables used for computations

  //clear all data in matrices a and b
  for(k=0; k<n; k++){

    for(i=0; i<m; i++){

      a[i][k] = 0;

    }

    for(j=0;j<p;j++){ 

      b[k][j]=0;

    }

  }


  //inputs random variables 0-126 in matrices a and b
  for(k=0; k<n; k++){

    for(i=0; i<m; i++){
 
      a[i][k] = rand()%127;

      printf("a(%d,%d):%d \n", i,k,a[i][k]);  //display first matrix
 
    }

    for(j=0;j<p;j++){ 

      b[k][j] = rand()%127;

      printf("b(%d,%d):%d \n", k,j,b[k][j]);  //display second matrix

    }

  }

  start = timing(0);  //start timing

  //compute

  end = timing(1);   //end timing

  printf("time it took %d s\n", end - start);  //displaying length of time the program took to run
  

  return 0;
}