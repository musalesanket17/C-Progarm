/*
Variable/Identifier decleration
variable Assingment
8 bits = 1 bytes
data types   sizeof in bytes
 int           4
 float         4
 char          1
 double        8




#include<stdio.h>

int main(){
     int a=0;
     float z=1.22;
     char ch='$';

     printf("%d  %c %f  \n", a,ch ,z);

    //  reassing the  value to variable;

    a=10;
    ch ='*';
    z=2.22;
    printf("%d %c  %f",a ,ch, z);
    return 0;
}



// how can we found size of data type with using inbuilt fcuntions With sizeof()

#include <stdio.h>

int main()
{

    int a = 50;
    char s = '*';
    float d = 1.222;
    printf("Size of variable a : %d \n", sizeof(int));
    printf("Size of char s %d \n", sizeof(a));
    printf("Size of float d %d \n :", sizeof(1));

    char ch = 'a';

    printf("%d ", sizeof(ch));
    printf("%d ", sizeof(char));

    printf("%d", sizeof('A'));
    //  It will aslo gives 4
    // because due to ASSCi value it convert to it's intiger
    //  And integer takes [4] bytes thatswhy it will return [4]


    printf("%d" , sizeof(3.3))
    // It will take default 8 bytes rather than 4 bytes becase if you directly
    //  gives floating value than it will take double type
    printf("%d" , sizeof(3.3f))
    // IN this case it will take number and float and assing the value as a float means 4 Becase of [f];





    return 0;
}


#include<stdio.h>

int main(){

 int octal = 064;

//  This is a octal number;
// for printing this number you have to use %o/0
// for printing it with HExadecimal Number then use %x
// for printg as aintiger you have to use %d;

// printf("%o \n" , octal);
// printf("%x \n",octal);
// printf("%d \n" , octal);

 
int hexa = 0x123;
printf("%6x \n",hexa);
printf("%-10d \n" , hexa);
printf("%5o",hexa );
 
 return 0;
}

// [+] indicates to leave spaces  from left side ;
// [-] indicates leave spaces from right hand side;

*/

#include <stdio.h>

int main(){
   float a =1.2345;
   printf("%.3f" , a);


//    When you give .how much digit you want to print  after [.3f] then it will print 3digit after decimal; 


      printf("% 8.2f \n", a);
    //   It will give 8 spaces and 2 values after decimal;

     int v=230;

     int i;
      i= printf("Value=%d",v);
      printf("%d" , i);

    return 0;

}