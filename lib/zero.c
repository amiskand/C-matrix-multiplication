#include "header.h"

bool zeroMatrix(char a[][N], char b[][P], int c[][P], unsigned char i, unsigned char j, unsigned char k){


  //clear all data in memory locations of matrices a, b and c
  bool f=1; //to test return a bool value


  //initialize matrices that resides outside the function
  for(k=0; k<N; k++){

    for(i=0; i<M; i++){
      
      a[i][k] = 0;

    }

    for(j=0;j<P;j++){ 

      b[k][j]=0;
    }
  }

  for(i=0; i<M; i++){

    for(j=0;j<P;j++){ 

      c[i][j]=0;

    }

  }

  return f;

}