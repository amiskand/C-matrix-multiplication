#include "header.h"

long int timing(bool var){

  time_t start, end;
  clock_t stc, endc, cstc, cendc;

  switch(var){

  case 0:
    start = time(NULL);
    stc = time(NULL);
    cstc = clock();
    return start;   
//    break;

  case 1:
    time(&end);
    time(&endc);
    cendc = clock();   
    return end; 
//    break;


  }


}

