#include<stdio.h>
#include<string.h>
int main(){
    char S1[10], S2[10];
    int l,m;
    printf("Input name: ");
    scanf("%s",&S1);
    l=strlen(S1);
    printf("DATA YOU ENTER: %d\n",l);
    printf("Input name: ");
    scanf("%s",&S2);
    m=strlen(S2);
    printf("DATA YOU ENTER: %d",m);
}