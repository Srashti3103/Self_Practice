// BITWISE OPERATOR

#include<stdio.h>

   int    main()
   {
    
    int a=4;
    int b=5;
    
    printf("%d\n", a&b);// & AND BOTH CONDITION TRUE
    
    /*
    
    1 1 = 1
    1 0 = 0
    0 1 = 0
    0 0 = 0
    
    100 = 4
    101 = 5
    --------- 4&5
    100 = 4
    
    */
    
    printf("%d\n", a|b);// | OR ONLY ONE OR TWO CONDITION TRUE
    
    /*
    
    1 1 = 1
    1 0 = 1
    0 1 = 1
    0 0 = 0
    
    100 = 4
    101 = 5
    --------- 4|5
    101 = 5
    
    */
    printf("%d\n", a^b); // ^ XOR  // if both bit are same --->0, not same --->1
    
    /*
    
    1 1 = 1
    1 0 = 1
    0 1 = 1
    0 0 = 0
    
    100 = 4
    101 = 5
    --------- 4^5
    001 = 1
    
    */
    printf("%d\n", ~a);// one's complement ~a = -(a+1)
    
    
    printf("%d\n", 10<<2);// << left shift // 40
    
    printf("%d\n", 10>>2);// << right shift // 2
    
    
   }