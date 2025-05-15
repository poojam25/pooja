#include <stdio.h>
int main() 
{
    int num,x;
    scanf("%d %d",&num,&x);
    for(int i=1;i<=x;i++)
    {
        printf("%d * %d = %d\n",i,num,i*num);
    }
}