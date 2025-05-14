#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,tot;
    scanf("%d",&m1);
    scanf("\n%d",&m2);
    scanf("\n%d",&m3);
    scanf("\n%d",&m4);
    scanf("\n%d",&m5);
    tot=m1+m2+m3+m4+m5;
    float avg;
    avg=tot/5;
    printf("Total :%d",tot);
    printf("Average: %.2f",avg);
    return 0;
}