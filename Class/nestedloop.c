#include<stdio.h>
int num(int n){
    for(int i=1;i<n;i++){
     for(int j=1;j<n;j++){
        printf("%d",i);
     }
     printf("\n");
}
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("", num(n));
    return 0;
}