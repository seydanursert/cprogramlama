#include <stdio.h>
#include <string.h>

int main(){
    char name[25];
    printf("\n Adin ne?: ");
    fgets(name,25,stdin);
    name[strlen(name)-1]='\0';


    while (strlen(name)==0)
    {
        printf("\n herhangi bir isim girmedin");
        printf("\n Adin ne?: ");
        fgets(name,25,stdin);
        name[strlen(name)-1]='\0';
    }
    
    printf("Merhaba %s ",name);
}