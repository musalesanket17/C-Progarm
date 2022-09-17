// pointers
// Printer a variable that store the address of another variable With using '*' and '&'
// '*' = Value at address
// '&' = Address


/*
Mainly two type for Calling function 
1. Call by value 
2. call by reference
*/
 

 /*
#include <stdio.h>

int main()
{
   
     int age = 22;
     int *ptr = &age;
     int _age = *ptr;
     printf("%d",_age);
     return 0;


    char str = '*';
    char *ptr = &str;

     printf("%p \n",ptr);
     printf("%p \n",&str);
     printf("%c  \n",*ptr);
     printf("%c  \n",*(&str));
      

    int x;
    int *ptr;

     ptr =&x;
    *ptr = 0;

    printf("%d \n", x);
    printf("%d  \n", *ptr);

    *ptr += 5;
    printf("%d \n", x);
    printf("%d  \n", *ptr);

    (*ptr)++;
    printf("%d \n", x);
    printf("%d \n", *ptr);

 

//  POINTER TO POINTER

  int i;
  int *ptr;
  int **pptr;
  

  ptr =&i;
  *ptr = 4;
  pptr =&ptr;

   printf("%d \n",*ptr);
   printf("%d \n",**pptr);
   printf("%d \n",i);
 
 
   

    
    return 0;
}


#include<stdio.h>
void sum(int s);
void _sum(int *s);


int main(){
  
   int num = 5;
     sum(num);
     printf("Ori1 %d \n",num);
     _sum(&num);
      printf("Ori2 %d \n",num);

    return 0;
}

void sum(int n){
    
    n = n +1;
    printf("%d \n",n);
}

void _sum(int *d){

    *d=*d +1;
    printf("%d \n",*d);
}

*/

// Swap function

#include<stdio.h>

void swap(int *a,int *b);

int main(){

    int a=1;
    int b=2;
        
        swap(&a,&b);
    printf("%d ,%d" , a,b );
    return 0;
}

void swap(int *a,int *b){
     
     int temp;

     temp = *a;
     *a = *b;
     *b = temp;

     printf("%d ,%d" , *a,*b );
}