#include<stdio.h>
int main(){
    float Celcius, Fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&Fahrenheit);
    Celcius = (Fahrenheit - 32) * 5/9;
    printf("Temperature in Celcius: %.2f",Celcius);
    printf("\nTemperature in Fahrenheit: %.2f",Fahrenheit);
}