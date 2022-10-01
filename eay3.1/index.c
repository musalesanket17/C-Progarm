/*
 typedef = typedefination
 it will help to to give nick name to existing data type

 int
 typedef int sanket
 Right 'sanket' is nick name of 'int'


 enum = enumirated list
 enum department{admin , placementTeam , Traning}
*/

#include <stdio.h>

enum department
{
    admin=10,
    traning=20,
    placement=30
};

int main()
{

    typedef int sanket;
    //  Gives nickname to int datatype;

    sanket n1 = 21;
    printf("%d \n", n1);

    /*
     default enum value
     printf("Value of admin :%d " ,admin );
     printf("\n value of traning : %d" , traning);
     printf("\n value of placement : %d   " , placement);

     
    printf("Value of admin :%d ", admin);
    printf("\n value of traning : %d", traning);
    printf("\n value of placement : %d   ", placement);

    You can directly acsess the enum here like above Or create one enum
     variable here and assing the variable and print it
*/
     enum department e;
     e=traning;
     printf("%d \n" , e);

    return 0;
}