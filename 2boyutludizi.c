#include <stdio.h>

int main(){


 int dizi[2][3]={{1,2,3},{4,5,6}};

  dizi [0][0]=1;
  dizi [0][1]=2;
  dizi [0][2]=3;
  dizi [1][0]=4;
  dizi [1][1]=5;
  dizi [1][2]=6;
  
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<3;j++)
    {
        printf(" %d",dizi[i][j]);
    }
  }
    return 0;
}