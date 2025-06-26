#include <stdio.h>
#include <string.h>

typedef struct 
{
    char nick[25];
    char password[15];
    int id;

}Login;


int main(){
    //typedef struct yapisinda kısaltma yapmak için kullanilir
     
    Login account1={"sns","s1234",23456789};
    printf("Kullanici adi= %s\n",account1.nick);
    printf("Sifre: %s\n ",account1.password);
    printf("İd: %d\n",account1.id);

  return 0;
}