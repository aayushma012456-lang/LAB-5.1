#include<stdio.h>
#include<math.h>
int main(){
    int a,r,sum,z;

    printf("Enter value of a\n");
    scanf("%d",&a);

    z = a ;
    sum=0;

    while(a>0){
        r = a%10;
        sum = sum + pow(r,3);
        a = a/10;
    }
    
    if(z==sum)
    printf("Given number is armstrong number");
    else
    printf("Given number is not armstrong number");
    


    return 0;
}