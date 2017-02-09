#include<stdio.h>
typedef struct complex
{ 
float real ;
float img;
}complex;
complex add(complex a,complex b);
int   main(){
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
complex add(complex a,complex b)
{
complex c;
 c.real=a.real+b.real;
c.img=a.img+b.img;
return(c); 
}

 
