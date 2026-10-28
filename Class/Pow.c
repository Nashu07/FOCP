#include<stdio.h>
#include<math.h>
int main(){
    int n,a,result;
    printf("Enter a no.: ");
    scanf("%d",&n);
    printf("Enter a no.: ");
    scanf("%d",&a);
    result= pow(n,a);
    printf("Result: %d",result);
    return 0;
}