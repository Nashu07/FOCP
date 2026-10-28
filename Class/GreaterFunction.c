#include<stdio.h>
int greatest(int a, int b){
    if(a>b)
    return a;
    else
    return b;
}
 int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Greatest value is %d", greatest(a,b));
 }