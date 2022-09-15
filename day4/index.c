// Use forloop While loop Do while loop
#include <stdio.h>

int main()
{
    /*
       for(int i=1;i<=10;i++){

           printf("%c \n",i + "Hello");
       }


      int a=1;
      int n;
      printf("Enter A Number : ");
      scanf("%d",&n);
      while(a<=n){
         printf("hello Word \n");
         a++;
      }

   //   Do while Loop

    int a=1;
    do{
       printf("%d \n",a);
       a++;
    }while (a<=3);

    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
     int i=1;
     int sum = 0;
     do{
        sum = sum + i ;

        i++;

     }while(i<=n);

      printf("%d",sum);
       return 0;
       */

    //    Take input from user Till User Enter Odd Number;

    int n;

    do
    {

        printf("Enter a Number :");
        scanf("%d", &n);

        if (n % 2 != 0)
        {
            break;
        }
        printf("Enter Number is Even %d \n", n);

    } while (1);
    printf("You Put Odd Number ");
}
