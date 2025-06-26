#include <stdio.h>
#include <string.h>

struct Students
{
    char name[15];
    int age;


};



int main(){

    struct Students student1;
    struct Students student2;

    strcpy(student1.name,"Seyda");
    student1.age=23;

    strcpy(student2.name,"Seyma");
    student2.age=27;
    

   printf("%s\n",student1.name);
   printf("%d\n",student1.age);
   printf("************************* \n");
   printf("%s\n",student2.name);
   printf("%d\n",student2.age);
    
}