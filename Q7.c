 #include <stdio.h>
int main() {
    float a,b;
    char op;
     printf("Enter numbers\n");
    scanf(" %f , %f", &a,&b);
    printf("Enter Operation\n");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            printf("%.2f", a + b);
            break;
        case '-':
            printf("%.2f", a - b);
            break;
        case '*':
            printf("%.2f", a * b);
            break;
        case '/':
            printf("%.2f", a / b);
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}





    