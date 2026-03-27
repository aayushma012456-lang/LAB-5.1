#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if(n>=500){
        if(n<=1000)
        printf("Number is within the range");
        else 
        printf("Out of range");
    } else {
        printf("Out of range");
    }

    return 0;
}