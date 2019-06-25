#include "header.h"

bool varMatrix(char a[][N], char b[][P], unsigned char i, unsigned char j, unsigned char k){

  //inputs random variables 0-126 in matrices a and b
  
  bool f=1; //to test return a bool value

  FILE *fp;
//  fp=fopen("fileA.txt","w");
  fp=fopen("fileA.m","w");

  fprintf(fp,"a=[");

//  srand(time(0));

  for(i=0; i<M; i++){

    for(k=0; k<N; k++){

      a[i][k] = rand()%127;

      printf("a(%d,%d):%d ", i,k,a[i][k]);  //display first matrix  

      fprintf(fp,"%d ",a[i][k]);
     
    }

    fprintf(fp," ; ");

    printf("\n");

  }

  fprintf(fp,"]");

  fclose(fp);

  printf("\n");

//  fp=fopen("fileB.txt","w");
  fp=fopen("fileB.m","w");

  fprintf(fp,"b=[");

  for(k=0; k<N; k++){

    for(j=0;j<P;j++){ 

      b[k][j] = rand()%127;

      printf("b(%d,%d):%d ", k,j,b[k][j]);  //display second matrix

      fprintf(fp,"%d ",b[k][j]);

    }

    fprintf(fp," ; ");
   
    printf("\n");

  }

  printf("\n");

  fprintf(fp,"]");

  fclose(fp);

  return f;
}