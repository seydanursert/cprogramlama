#include <stdio.h>

int main(){
    char grade;
    printf("\n Notunuzu giriniz:") ;
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A':
        printf("Mükemmel");
        break;
    case 'B':
       printf("Notun basarili");
       break;
    case 'C':
       printf("Notun iyi");
       break;
    case 'D':
       printf("Notun biraz ");
       break;
    case 'F':
       printf("Basarisiz oldun");
       break;
    default:
        printf("Gecerli bir not giriniz");
        break;
    }
    return 0 ;
}