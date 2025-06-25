#include <stdio.h>

int main(){
    int age;
    printf("\n Yasinizi giriniz:");
    scanf("%d",&age);

    if (age >= 18)
    {
        printf("Oy kullanabilirsiniz");
    }
    else
    {
        printf("Oy kullanamazsiniz");
    }

return 0;
}