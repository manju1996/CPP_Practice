#include"complex.h"
complex add(complex a,complex b)
 {
   complex c;
   c.real=a.real-b.real;
    c.img=a.img-b.img;
    return(c);                                                 
  }
