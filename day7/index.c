// Array in c?

#include<stdio.h>

int main(){

   int arr[2];

   printf("Enter Eng Marks ");
   scanf("%d",&arr[0]);

   printf("Enter MArathi mark ");
   scanf("%d",&arr[1]);

 printf("%d %d",arr[0],arr[1]);


    return 0;
}


#include <stdio.h>

int main()
{

    int arr[3];

    printf("Enter 1st Item price ");
    scanf("%d",&arr[0]);

    printf("Enter 2nd  Item Price ");
    scanf("%d",&arr[1]);

    printf("Enter 3rd item price ");
    scanf("%d",&arr[2]);

    printf("1st Item  = %f , 2nd item = %f , 3rd item = %f" , arr[0]+0.18*arr[0] , arr[1]+0.18*arr[1],arr[2]+0.18*arr[2]);
     return 0;
}
 
 You can also initilize arr like

 int/float/char  arr[2] ={100,100}
            0R
 int /float / char  arr[] = {1,2,3,4,5,6,7} It take direct length outomatically; 



// Pointer Arthematic ;

 #include<stdio.h>

 int main(){
    
     int i=0;
     int *ptr1 = &i;
      printf("%u  ",ptr1);
     ptr1++;
     printf("%u ",ptr1);

     float a=10.0;
     float *ptr2 =&a;
     printf("%u  ",ptr2);
     ptr2++;
     printf("%u  ",ptr2);

     char ch ='*';
     char *ptr3 = &ch;
     printf("%u  ",ptr3);
     ptr3++;
     printf("%u   ",ptr3);
       
     return 0;

 }
 

#include<stdio.h>

int main(){
  
   int arr[5];

    int *ptr = &arr[0];

    for(int i=0;i<5;i++){
         
        printf("Enter Number %d " , i);
        scanf("%d",&arr[i]);
       

    }

    for(int i=0;i<5;i++){
         
         printf("%d %d \n",i ,arr[i]);
    }
  
    return 0;
}


#include<stdio.h>

void printarr(int arr[],int n);

int main(){

   int arr[]={1,2,3,4,5};

    printarr(arr,5);
    return 0;
}

void printarr(int arr[] , int n){
      
      for(int i=0;i<n;i++){
         
          printf("%d \t", arr[i]);

      }

}


#include<stdio.h>

int count(int arr[],int n,float *count1);
int main(){

     float count1=0;
     int arr[5] ={2,3,4,5,6};
     count(arr,5,&count1);
     printf("%f", count1);
    return 0;
}

int count(int arr[],int n,float *count1){
   int c=0;
     for(int i=0;i<n;i++){
 
      
        if(arr[i] % 2 != 0){
            *count1++;
        }
       
     }
//  printf("%d",c);

}


#include<stdio.h>

int ret(int *arr,int n);
int main(){
 
    int arr[4]={1,2,3,4};
    ret(&arr,4);
     

   
    return 0;
}

int ret(int *arr,int n){
     
    for(int i=n;i>=0;i--){
         printf("%d  \n" , arr[i]); 
    }
}