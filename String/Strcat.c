#include<stdio.h>
#include<string.h>
int main(){
    char s1[10] = "Nashir ";
    char s2[] = "Khan";
    strcat(s1, s2);
    printf("%s",s1);
}