#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){


  int max=100;
  int min=1;
  int tahmin;
  int tahminler;
  int cevap;

  srand(time(0));

  cevap=(rand()%max)+min;

  do
  {
    printf("Bir sayi giriniz:");
    scanf("%d",&tahmin);
    if(tahmin>cevap)
    {
        printf("Tahminimiz sayidan yuksek\n");
    }
    else if (tahmin<cevap)
    {
        printf("Tahmininiz sayidan yuksek\n");
    }
    else
    {
        printf("dogru bildin\n");
    }
    tahminler+=1;

  } while (tahmin !=cevap);
  
   printf("***********************\n");
   printf("%d\n",cevap);
   printf("Tahmin sayiniz %d\n",tahminler);
   printf("************************\n");




    return 0;
}