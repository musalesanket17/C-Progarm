// Fucntions And recurtion

#include <stdio.h>

// fcuntion declearation/prototype
// void sum();
void print();
int main(){
    //  fucntion Call
    // sum();
    
print();
     return 0;
}


void  print(){
char a;
printf("If you are Indian type i & if you are Pakistani the type p : ");
scanf("%c",&a);
 
 if(a == 'i'){
    printf("Namste India");
 }
 else if(a == 'p'){
    printf("Bagh BSDK");
 }
 else{
    printf("Plz Enter Valid Information");
 }

}






// fucntion definaton
int sum1;
void sum(){
    int a=2;
    int b=3;
    sum1 =a+b;
    printf("%d",sum1);
}



#include<stdio.h>
int sum(int a,int b);

int main(){
    int a;
    int b;
    printf("Enter your 1st Value : ");
    scanf("%d",&a);
    printf("Enter Your 2nd Value : ");
    scanf("%d",&b);

    int s=sum(a,b);
   printf("Total Sum : %d",s);

    return 0;
}

int sum(int x,int y){
     
     return x+y ;
}



#include<stdio.h>
int check(int n);
int table(int a);

int main(){
     
     int n;
     printf("Enter Number : ");
     scanf("%d",&n);
     check(n);
    
    

     return 0;
}

int check(int x){

    if(x%2==0){
          table(x);
    }
    else{
        printf("Enter valid Even number ");
    }
}

int table(int y){

     for(int i=1;i<11;i++){
         
         printf("%d \n", i * y );
     }
}



#include<stdio.h>
#include<math.h>

int check(int a);
int sq(int x);

int main(){
  
   int a;
   printf("Enter a Valid Number : ");
   scanf("%d",&a);
   check(a);
    return 0;
}

int check(int x){
     
     if(x%2!=0){
        sq(x);
     }
     else printf("Enter valid Odd Number");
}

int sq(int r){
     
     printf("%f", pow(r,2));
}




// Recurtion 

#include<stdio.h>

int print(int count);

int main(){
    print(5);
    return 0;
}

int print(int count){
  if(count == 0){
    return;
  }
   printf("Hello Word \n");
   print(count - 1);
     
}


#include<stdio.h>

int sum(int a);
int main(){
 
   int i=sum(5);
    printf("%d",i);
    return 0;
}

int s1=0;
int sum(int a){
  
   if(a==1){
    return 1;
   }
  
    int s=sum(a-1);
    s1=s*a;

    return s1;
    ;

}


 
//  Q Percentage

 #include<stdio.h>

 float percentage(int a,int b,int c);
  int main(){
    int a=10;
    int b=10;
    int c=10;
    float res =percentage(a,b,c);
    printf("%f",res);
    return 0;
  }

  float percentage(int a,int b,int c){
     
       float percent = a + b+ c; 
            percent =percent /3 *10;
            return percent;
  }
