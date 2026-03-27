#include<stdio.h>
int main (){
    int a;
    printf("Enter number \n");
    scanf("%d", &a);
    if(a>100)
        printf("Given number is greater than hundred");
    else if (a ==100)
        printf("Given number is equal to hundred");

    else
        printf(" Given numebr is less than 100");


    return 0;
}