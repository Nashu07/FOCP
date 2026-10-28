#include<stdio.h>
int Calculator(int a, int b, char op){
    switch(op){
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            if(b!=0)
                return a/b;
            else{
                printf("Error: Division by zero\n");
                return 0;
            }
        default:
            printf("Error: Invalid operator\n");
            return 0;
    }
    }

    int main(){
        int a,b;
        char op;
        printf("Enter two numbers: ");
        scanf("%d%d",&a,&b);
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c",&op);
        int result = Calculator(a,b,op);
        printf("Result: %d",result);
    }
