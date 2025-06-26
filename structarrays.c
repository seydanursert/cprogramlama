#include <stdio.h>
#include <string.h>

struct Youtuber
{
    char name[15];
    float sub;


};

int main()
{
    struct Youtuber youtuber1={"kodluyoruz",3300};
    struct Youtuber youtuber2={"tedx",20000};
    struct Youtuber youtuber3={"yoga",30000};

    struct Youtuber youtubers[]={youtuber1,youtuber2,youtuber3};

    for(int i=0;i<sizeof(youtubers)/sizeof(youtubers[0]);i++)
    {
        printf("Kanal adi: %s\n",youtubers[i].name);
        printf(" Abone sayisi: %f \n",youtubers[i].sub);
    }
    
}
