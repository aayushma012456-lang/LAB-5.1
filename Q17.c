#include<stdio.h>
int main(){
    int i=1,n,fact=1;

     printf("Enter a number: ");
    scanf("%d", &n);

//using while loop
   /* while(i <=n){
       fact =fact * i;
        i++;
    }
    printf("factorial of given numeer is %d", fact);
*/
//using Foe loop
for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return 0;
}