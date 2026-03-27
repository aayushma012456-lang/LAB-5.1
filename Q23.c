#include<stdio.h>

int main() {
    int a = 0, b = 1, c;
    int n = 20; // first 20 numbers
    int i = 0;

   printf("First 20 Fibonacci numbers:\n");

    do {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    } while(i< n);

    return 0;
}