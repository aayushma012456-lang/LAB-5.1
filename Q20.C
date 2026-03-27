#include <stdio.h>
int main() {
    int n, rev = 0, z;

    printf("Enter number: ");
    scanf("%d", &n);
    z = n;
    while(n > 0) {
        rev = rev*10 + n%10;
        n /= 10;
    }
    if(rev==z)
    printf("Given Number is palindrome number");
    else
    printf("Given Number is not palindrome number");


    return 0;

}