#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Programming";
    int i,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
        count++;
    }
     printf("Number of Vowels is: %d",count);
}