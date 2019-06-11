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

//  c[0][0]=0; //makes sure first summation is always 0
  
  char start, end;  //timing variables used for computations

  srand(time(0));

  start = timing(0);  //start timing

  //computation

  for(i=0;i<m;i++){
    for(j=0;j<p;j++){
      for(k=0;k<n;k++){

    
        a[i][k] = (rand()%127);

//printf(" %d  \n", a[i][k]);

        printf("a(%d,%d):%d ", i,k,a[i][k]);  //display first matrix

//        printf("a:%d", a[i][k]);

        b[k][j] = (rand()%127);

//printf(" %d  \n", b[k][j]);

        printf("b(%d,%d):%d ", k,j,b[k][j]);  //display second matrix

//        printf("b:%d" , b[k][j]);

//multiply then add the result to the previous result     
         c[i][j] += a[i][k] * b[k][j];

//printf(" %d  \n", c[i][j]);


        printf("c(%d,%d):%d      \n", i,j,c[i][j]);  //display results
//        printf("c:%d   ", c[i][j]);

      }


//should c be added here?


//        printf("c:%d   ", c[i][j]);
//    printf("\n");

    }

//  printf("\n");

  }



  end = timing(1);   //end timing

  printf("time it took %d s\n", end - start);  //displaying length of time the program took to run


  return 0;
}