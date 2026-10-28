#include<stdio.h>
int countdigits(long long n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
int main(){
    long long n;
    scanf("%lld",&n);
    printf("Number of digits: %d",countdigits(n));
}