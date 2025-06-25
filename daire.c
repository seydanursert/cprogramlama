#include <stdio.h>

int main(){
    const  double pi=3.14159;
    double radius;
    double circumference;
    double area;

    printf("\n Dairenin yaricapini giriniz:");
    scanf("%lf",&radius);

    circumference = 2 * pi * radius;
    area= pi * radius * radius ;

    printf("\n Dairenin Çevresi= %lf ",circumference);
    printf("\n Dairenin Alani= %lf",area);



  return 0;
}