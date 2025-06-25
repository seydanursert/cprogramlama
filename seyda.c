#include <stdio.h>

char bilgiYazdir()
{
    char isim[20];
    char soyisim[20];
    int age;
    printf("Adinizi giriniz:");
    scanf("%s",&isim);

    printf("\n soyadinizi giriniz:");
    scanf("%s",&soyisim);

    printf("\n yasinizi giriniz:");
    scanf("%d",&age);
    return  ("\n Merhaba %s %s ,%d yasindasin\n",isim,soyisim,age);
    
   


}


int main(){

    bilgiYazdir();

}