#include <_stdio.h>
#include <math.h>

int main(){


  double A;
  double B;
  double C;

   printf("A kenarini giriniz:");
   scanf("%lf",&A);

   printf("\n B kenarini giriniz:");
   scanf("%lf",&B);

   

   C=sqrt(A*A+B*B);

   printf("%lf",C);
   return 0;
}