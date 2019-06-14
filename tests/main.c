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
  char m = 127; //row size for matrix a and c
  char n = 127; //another size for matrix a and b
  char p = 127; //column size for matrix b and c


  char a[m][n];   //first matrix 
  char b[n][p];   //second matrix
  int c[m][p];  //result matrix


  //loop variables i,k,j
  //they unsigned variables because we don't want negative indices
  unsigned char i = 0;  //row index for matrix a and c
  unsigned char k = 0;  //another index for matrix a and b
  unsigned char j = 0;  //column index for matrix b and c
  
  char start, end;  //timing variables used for computations

  bool flag = 0;

  //clear all data in memory locations of matrices a, b and c
  for(k=0; k<n; k++){

    for(i=0; i<m; i++){
      a[i][k] = 0;

    }

    for(j=0;j<p;j++){ 

      b[k][j]=0;

      c[i][j]=0;

    }

  }

  for(i=0; i<m; i++){

    for(j=0;j<p;j++){ 

      c[i][j]=0;

    }

  }


  //inputs random variables 0-126 in matrices a and b
  for(k=0; k<n; k++){

    for(i=0; i<m; i++){

      a[i][k] = rand()%127;

      printf("a(%d,%d):%d ", i,k,a[i][k]);  //display first matrix
    printf("\n"); 
    }

    printf("\n");

    for(j=0;j<p;j++){ 

      b[k][j] = rand()%127;

      printf("b(%d,%d):%d ", k,j,b[k][j]);  //display second matrix

    }

    printf("\n\n");
  }

  start = timing(0);  //start timing

  //compute

  for(i=0; i<m; i++){

    for(j=0;j<p;j++){ 

      for(k=0; k<n; k++){

	c[i][j]+=a[i][k]*b[k][j];	

      }

      printf("c(%d,%d):%d ",i,j,c[i][j]);      

    }

    printf("\n");

  }

  end = timing(1);   //end timing

  printf("\ntime it took %d s\n", end - start);  //displaying length of time the program took to run
  

  return 0;
}