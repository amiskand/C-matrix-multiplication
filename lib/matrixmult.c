/*
  I am computing two matrices with elements psuedorandomly 
  choosen by this program, specifically the C library.

*/

#include "header.h"

bool mtrxMult(char a[][N], char b[][P], int c[][P], unsigned char i, unsigned char j, unsigned char k){

  bool f = 1;  

  FILE *fp;
  fp=fopen("fileC.txt","w");
//  fprintf(fp,"c1=[");

  //computation

  for(i=0; i<M; i++){

    for(j=0;j<P;j++){ 

      for(k=0; k<N; k++){

	c[i][j]+=a[i][k]*b[k][j];	

      }

      printf("c(%d,%d):%d ",i,j,c[i][j]);      

      fprintf(fp,"%d ",c[i][j]);

    }

    printf("\n");

    fprintf(fp,"\n");

  }


//  fprintf(fp,"]");  

  printf("\n");

  fclose(fp);

  return f;


}
