#include<stdio.h>
int squareofsum(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum += i*i;
    }
    return sum;
}
 int main(){
    int n;
    scanf("%d",&n);
    printf("Square of Sum: %d",squareofsum(n));
 }