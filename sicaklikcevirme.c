#include <stdio.h>
#include <ctype.h>
int main(){
    char unit;
    float temp;

    printf("\n sicaklik biriminizi giriniz (F) veya (C): ");
    scanf("%c",&unit);

    unit=toupper(unit);

    if(unit == 'C'){
        printf("\n Celcius cinsinden sicakligi giriniz:");
        scanf("%f",&temp);
        temp = (temp * 9/5) + 32;
     printf("\n sicaklik fahreneit cisnsinden %.1f",temp);
        
    }
    else if(unit == 'F'){
     printf("\n Sicaklik degerini fahrenheit cinsinden giriniz: ");
     scanf("%f",&temp) ;
     temp= ((temp - 32) * 5) /9 ;
     printf("\n Sicaklik degeri  celcius cinsinden %.1f",temp);
    

    }
    else
    {
        printf("\n %c gecerli bir birim degil",unit);
    }
    

return 0;
}

