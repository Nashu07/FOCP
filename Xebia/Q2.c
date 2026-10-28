#include<stdio.h>
int main(){
    float Student1, Student2, Student3; 
    float Average;
    printf("Enter marks of Student 1: ");
    scanf("%f",&Student1);
    printf("Enter marks of Student 2: ");
    scanf("%f",&Student2);
    printf("Enter marks of Student 3: ");
    scanf("%f",&Student3);
    Average = (Student1 + Student2 + Student3) / 3;
    printf("The average marks of three students is: %.2f", Average);
}