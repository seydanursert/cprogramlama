#include <stdio.h>
#include <string.h>

int main(){
    
    char name[25];
    int age;

    printf("Adin ne?");
    fgets(name,25,stdin);
    name[strlen(name)-1]= '\0';

    printf("Kaç Yasındasin?");
    scanf("%d",&age);

    printf("Merhaba %s, nasilsin\n ",name);
    printf("%d yasindasin",age);

    return 0;
}