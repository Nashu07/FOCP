#include<stdio.h>
int main(){
     int Student_id, Age;
    float Percentage;
    char Grade;
    printf("Enter Student ID: ");   
    scanf("%d", &Student_id);
    printf("Enter Age: ");
    scanf("%d", &Age);
    printf("Enter Percentage: ");
    scanf("%f", &Percentage);
    printf("Enter Grade: ");
    scanf(" %c", &Grade);
    printf("Student ID: %d\n", Student_id);
    printf("Age: %d\n", Age);  
    printf("Percentage: %.2f\n", Percentage);
    printf("Grade: %c\n", Grade);
    return 0;
}