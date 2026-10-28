#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    int l;
    printf("Enter Your Name: ");
    scanf("%s",name);
    printf("%s",strrev(name));
}