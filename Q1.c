#include<stdio.h>
int main(){
    int a;
    printf("Enter number");
    scanf("%d", &a);

    if(a>100)
        printf("Given number is greater than hundred");
    else
        printf("Less than 100");


    return 0;
}