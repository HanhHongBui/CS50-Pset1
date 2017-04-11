#include<stdio.h>
#include<cs50.h>
#include <math.h>
int main(void)
{
    float f=0;
    do 
    {  
        printf("How much change is owed?");
        f= GetFloat();
    }
    while(f <=0);
   
    int c = round(f*100);
    
   int q,q1,d,d1,n,p,s;
   q = c/25;
   q1=c%25;
        d=q1/10;
        d1=q1%10;
            n=d1/5;
            p=d1%5;
  
   s=q+d+n+p;
   printf("%d\n",s);
    return 0;
    
}