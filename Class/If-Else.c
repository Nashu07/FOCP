#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: "); 
    scanf("%d", &n);
    if(n==0){
        printf("%d is neither even nor odd\n", n);}
    else if(n%2 == 0)
        printf("%d is even\n", n);
     else 
        printf("%d is odd\n", n);
    return 0;
}
