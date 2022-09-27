/*
Arethamtic oprators 
[+ , - , * , / , % ]


Shorthand oprator
[+= , -=  , *=  , %= , /=]

Relational oprator
[<  >  <=  >=  !=  == ]
[1 INDICATES TRUE   0 INCATES FOR FALSE]

Unary Orations
[  ++variable , --variable  ]  pre Increment & pre Decrement ; 
[  variable++ , variable-- ]  post Increment & post decrement;

variable++  / variable--
in this case it will assing the value first then do the opration


++variable / --variable
in this case first increment the value and then assing to any variable


 */

#include<stdio.h>

int main(){
    int i=4;
    printf("%d , %d , %d " , ++i , i  , i++);

    
    // Its Totaly dependent on compiler to compiler [if any option in cinclusion then select that ]
    // Otherwise goes right to left [ 6 <- 5 <- 4]


    int e= i++ + i-- + ++i + --i;
    printf("%d %d " , e,i);
    // This type of opration also compiler dependent 
    // Other wise manually goes to left to right;
    return 0;
}