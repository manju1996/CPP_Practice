#include<stdio.h>
#include<stdlib.h>
#include"complex.h"
int main()
{
 complex a,b,result;
 printf("enter the first complex number\n");
 scanf("%f",&a.real);
 scanf("%f",&a.img);
 printf("enter the second complex number\n");
 scanf("%f",&b.real);
 scanf("%f",&b.img);
 result= add( a, b);
 printf("result=%f+%fi",result.real,result.img);
 return 0;
}
