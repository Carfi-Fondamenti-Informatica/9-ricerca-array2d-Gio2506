#include "lib.h"
int ArrayNomi (char bid[10][20], char mono[20] ){
    for (int i=0;i<10;i++){
      bool si=true;
      for (int j=0;j<20;j++){
          if (bid [i][j]!=mono[j])si=false;
      }
      if(si)return i;
    }
    return -1;
}
