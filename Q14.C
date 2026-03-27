//sum of digits(143)
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while(n > 0) {
        sum += n% 10;   // extract last digit
        n = n / 10;    //remove last digit
    }

    printf("Sum = %d", sum);
    return 0;
}