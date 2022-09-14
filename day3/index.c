// Conditional Statement if Else Switch

/*
# include<stdio.h>

int main(){
     int a;
     printf("Enter Your Age");
     scanf("%d",&a);

     if(a >= 18 ){
        printf("You are Adult");
     }
     else{
        printf("You are not Adult");
     }

     return 0;
}


// With Ternary Oprator

#include<stdio.h>

int main(){

    int a;
    printf("Enter your Age");
    scanf("%d",&a);

    a>=18 ? printf("Youe are eligible for casting vote") : printf("Ypu are not eligible for casting Vote");

    return 0;
}



// Switch case 

# include<stdio.h>

int main(){
     
     int num;
     printf("Enter Your Mark");
     scanf("%d",&num);

     switch (num)
     {
     case 50:
         printf("You got 50%");
        break;
     case 60:
     printf("You got 60%");
    break;
     case 70:
     printf("You got 70%");
    break;
     case 80:
     printf("You got 80%");
    break;
     
     default:
        printf("You are not eligible for next examination");
        break;
     }
}
*/

// Check if char is Upppercase or not

  #include<stdio.h>

  int main(){
     
     char ch;
     printf("Enter a Character: ");
     scanf("%c",&ch);
     
     if(ch >= 'A' && ch <= 'Z')  printf("Letter is Capital"); else printf("Letter Is Small");

  }