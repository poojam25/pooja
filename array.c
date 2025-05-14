#include<stdio.h>
int main()
{
    char a[20]="coading";
    char x[6]={'h','p','p','y'};//  /0 mean end of the array which is default,,,
    printf("%c\n",x[4]);
    printf("%s\n %s",a,x);
    return 0;
}
//char a[20]="coading";
   // char x[]={'h','p','p','y'};printf("%s %s",a,x);if we print the we get an output as coading happycoading 
   //bcos of a contigues memory allocation ...so it print 