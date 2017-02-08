 #include<stdio.h>
void main ()
 {
	   int a,b,d,ca,cs1,cs2,cm,cd1,cd2;
            int i,N;
  printf("enter the number of students\n");
           scanf("%d",&N);
          
 for(i=0;i<N;i++)
	{
           printf("enter the first element\n");
           scanf("%d",&a);
	   printf("enter the second element\n");
	   scanf("%d",&b);
	   printf("enter the THIRD element\n");
	   scanf("%d",&d);
         
	     ca=a+b;
	     cs1=a-b;
             cs2=b-a;
             cm=a*b;
             cd1=a%b;
             cd2=b%a;
	

    if((ca==d)||(cs1==d)||(cs2==d)||(cm==d)||(cd1==d)||(cd2==d))
    {
      	printf("possible\n");
     }
  
else 
{
printf("impossible");
}
}
}
