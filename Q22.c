
#include<stdio.h>

int main(){
int a = 0,b = 1;
int c,n;

printf("Enter the number up to which you want to display the fibonacci sequence: \n");
scanf("%d",&n);

do{
c = a + b;
printf("%d\t",a);
a = b;
b = c;
} while(a <= n);

return 0;
}










