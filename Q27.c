#include <stdio.h>
int main(){
    int student;
    printf("Enter 1 for Roll no 1 student.\n");
    printf("Enter 2 for Roll no 2 student.\n");
    printf("Enter 3 for Roll no 3 student.\n");
    printf("Enter the number to see the respective student detail.\n");
    scanf("%d",&student);
    switch (student)
    {
    case 1:
        printf("Name   : Sohan Chhetri\n");
        printf("Age    : 16\n");
        printf("Gender : Male\n");
        printf("Address: Lamjung\n");
        printf("Roll No: 1\n");
        break;
    case 2:
        printf("Name   : Yuna Chhetri\n");
        printf("Age    : 17\n");
        printf("Gender : Female\n");
        printf("Address: Lamjung\n");
        printf("Roll No: 2\n");
        break;
    case 3:
        printf("Name   : Shavyata Regmi\n");
        printf("Age    : 15\n");
        printf("Gender : Female\n");
        printf("Address: Pokhara\n");
        printf("Roll No: 3\n");
        break;
    default:
    printf("Please Enter the student roll no for detail.");
        break;
    }

    return 0;
}


