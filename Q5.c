#include <stdio.h>
int main() {
    float cp, sp;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if(sp > cp)
        printf("It is Profit");
    else if(sp < cp)
        printf("It is Loss");
    else
        printf("No Profit No Loss");

    return 0;
}