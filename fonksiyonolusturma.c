#include <stdio.h>

void birthday(char name[], int age)
{
    printf("\n Happy birthday %s",name);
    printf("\n  you are %d  years old now",age);
}

int main(){

  char name[]="Nur";
  int age=24;


    birthday(name,age);
    return 0;
}