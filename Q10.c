#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter a, and c");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        printf("a is the greatest");
    }
    else if(b > a && b > c){
        printf("b is the greatest");
    }
    else{
        printf("c is the greatest");
    }
    return 0;
}