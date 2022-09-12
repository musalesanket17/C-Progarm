

How to print number/string/floating Value
# include<stdio.h>

int main(){
     
     int age=23;
     float pi = 3.14;
     char str = 's';
     printf( "%d \n",age);
     printf("%c \n", str);
     printf("%f \n",pi);
     return 0;
}



# include<stdio.h>

int main(){
      
    int age;
    printf("My age is");
    scanf("%d",&age);
    printf("My age is %d", age);
     return 0;

}

// PRint Sum With TAking input
# include<stdio.h>

int main(){
    int a;
    int b;
    printf("Enter a");
    scanf("%d",&a);
    printf("Enter b");
    scanf("%d",&b);

    int sum = a+b;
    printf("Total sum %d",sum);
    return 0;

}


// print area with taking input

 # include<stdio.h>

 int main(){
     int side;
    printf("Enter Side");
    scanf("%d",&side);
    printf("Area %d",side *side);

     
     return 0;
 }
 

// print area of circle
# include<stdio.h>

int main(){

    float radius;
    printf("Enter Radius");
    scanf("%f",&radius);
    printf("Your Circle radius is %f",(3.14 * radius* radius));
    return 0;
}


