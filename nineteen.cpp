// BITWISE OPERATOR

#include<stdio.h>

   int    main()
   {
   
   int a =10;
   int b = 5;
   int c = 20;
   
   printf(a<b&&a++<c);//false && true = false  
  
    printf(a);//10 because second condition is not checked 
  printf(a<b&a++<c);//false && true = false 
  printf(a);//11 because second condition is checked 
    
   }