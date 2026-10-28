#include<stdio.h>
int main(){
    char ch;
    char op;
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Enter an operator (+,-,*,/): ");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
        printf("Result: %d",a+b);
        break;
        case '-':
        printf("Result: %d",a-b);
        break;
        case '*':
        printf("Result: %d",a*b);
        break;
        case '/':
        printf("Result: %d",a/b);
        break;
        default:
        printf("Invalid operator");
        break;
    }
    return 0;
}