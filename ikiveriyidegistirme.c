#include <stdio.h>

int main(){
    char a='A';
    char b= 'B';
    char temp;

    temp =a;
    a=b;
    b=temp;

    printf("%c\n",a);
    printf("%c\n",b);



    

    return 0;
}