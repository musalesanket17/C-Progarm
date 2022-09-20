// Stuctures In which we can save diffrent type of data in one structure;

#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    char name[100];
    float cgpa;
};
int main()
{
    struct student s1;
    s1.roll_no = 41;
    s1.cgpa = 7.3;
    strcpy(s1.name, "sanket");
    printf("%d \n", s1.roll_no);
    printf("%f \n", s1.cgpa);
    printf("%s \n", s1.name);

    struct student s2;
    s2.roll_no = 21;
    s2.cgpa = 2.2;
    strcpy(s2.name, "Suresh");
    printf("%d \n", s2.roll_no);
    printf("%f \n", s2.cgpa);
    printf("%s \n", s2.name);

    struct student s3;
    s3.roll_no = 33;
    s3.cgpa = 3.3;
    strcpy(s3.name, "Surya");
    printf("%d \n", s3.roll_no);
    printf("%f \n", s3.cgpa);
    printf("%s \n", s3.name);

    return 0;
}