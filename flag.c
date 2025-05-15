#include <stdio.h>
int main() 
{
    int x=7;
    int flag=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
         flag ++;
        
    }
    if (flag==2) printf("it is a prime num");
    else printf("noot a prime num");
}