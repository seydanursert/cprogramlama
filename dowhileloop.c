#include <stdio.h>

int main()
{
    int number=0;
    int sum=0;

    do
    {
        printf("0\' dan buyuk bir sayi giriniz");
        scanf("%d",&number);
    
        if(number > 0 )
        {
            sum += number;
        }
    }while(number >0);
    
    printf("toplam: %d ",sum);
    
}

