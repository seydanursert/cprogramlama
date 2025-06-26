#include <stdio.h>
 
enum Month{Jan=1, Feb=2, Mar=3, Apr=4, May=5,Jun=6,Jul=7,Aug=8,Sep=9,Oct=10,Nov=11,Dec=12};

int main(){


   enum Month thisMonth;
   
   int input;

   printf("Bulunduğunuz ayin numarasini giriniz:");
   scanf("%d",&input);

   thisMonth=(enum Month)input; //enuma dönüştürme

   if(thisMonth!=6 && thisMonth!=7 && thisMonth!=8 )
   {
    printf("okul zamani");
   }
   else{
    printf("su an yaz tatilii");
   }







  return 0;
}



    
