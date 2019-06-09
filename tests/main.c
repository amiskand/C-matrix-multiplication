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
  char m = 2; //row size for matrix a and c
  char n = 3; //another size for matrix a and b
  char p = 4; //column size for matrix b and c

  int a[m][n];   //first matrix 
  int b[n][p];   //second matrix
  int c[m][p];  //result matrix

  //loop variables i,k,j
  unsigned char i = 0;  //row index for matrix a and c
  unsigned char k = 0;  //another index for matrix a and b
  unsigned char j = 0;  //column index for matrix b and c

  
  long int start, end;  //timing variables used for computations

//  srand(time(0));

  start = timing(0);  //start timing

  //computation
//  for(){

    
    a[i][k] = (rand()%255);

//printf(" %d  \n", a[i][k]);

    printf("a(%d,%d):%d ", i,k,a[i][k]);  //display first matrix

    b[k][j] = (rand()%255);

//printf(" %d  \n", b[k][j]);

    printf("b(%d,%d):%d ", k,j,b[k][j]);  //display second matrix


//multiply then add the result to the previous result     
    c[i][j] = a[i][k] * b[k][j];

//printf(" %d  \n", c[i][j]);


    printf("c(%d,%d):%d ", i,j,c[i][j]);  //display results

//  }



  end = timing(1);   //end timing

  printf("time it took %ld s\n", end - start);  //displaying length of time the program took to run


  return 0;
}