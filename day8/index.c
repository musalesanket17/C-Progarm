// strings;

/*
#include<stdio.h>
 
void print(char arr[]);

int main(){

    char str[] = "Sanket";
    print(str);
    return 0;
}

void print(char arr[]){

    for(int i=0;arr[i] != '\0';i++){

        printf("%c", arr[i]);
    }
}


#include<stdio.h>

int main(){
    char str[50];
    printf("Enter You Name : ");
    scanf("%s",str);
    printf("Your Name is %s " , str);

    return 0;
}


// if you want to take more than one string then you can use fgets(variable name,size , file name / stdin)

#include<stdio.h>
int main(){
 
//    char str[100];
//    printf("Enter Your Full name : ");
//    fgets(str,100,stdin);
char str[]= "Sanket Vilas Musale";
   puts(str);
 
    return 0;
}


// Count string length;

#include<stdio.h>

void count(char str[]);

int main(){
   printf("Enter Your Name : ");
   char str[100];
   fgets(str,100,stdin);
  
   
   count(str);

    return 0;
}

void count(char str[]){
  int c=0;

  for(int i=0;str[i] != '\0' ; i++){
        
        c++;
      
  }
   printf("%d" , c-1);
}


// inbuilt fcuntion for checking string length;

#include<stdio.h>
#include<string.h>

int main(){
      
    //   char str[]= "sanket";
    //   int length = strlen(str);
    //   printf("%d" , length);

    // copy one string into another;
     
      char str1[]="Bld string ";
      char str2[] ="Bew String";
       
    //    strcpy(str2,str1);
    //    puts(str2);

    //  How to concat two strings;

    // strcat(str1,str2);
    // puts(str1);

    // compare two strings;
     
     int a=strcmp(str1,str2);
     printf("%d" , a);

     return 0;
}


// HOw to take input one by one With using %c/

#include<stdio.h>

 void takeinput(char str[],int n);

int main(){
    char str[100] ;
    char ch;
    int i=0;
    while (ch != '\n')
    {
        scanf("%c" ,&ch);
        str[i]=ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    
    return 0;
}
*/

// Salting ?

#include<stdio.h>
#include<string.h>
void salting(char str[]);
int main(){
 
    char str[100];
    printf("Enter Your Password");
    scanf("%s",str);
    salting(str);
    
    return 0;
}
void salting(char str[]){

    char password[100];
     char salt[]="Test";
    strcpy(password,str);
    strcat(password,salt);
    puts(password);
}