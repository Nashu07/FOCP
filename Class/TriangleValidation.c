#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter Angle A: ");
    scanf("%d",&a);
    printf("Enter Angle B: ");
    scanf("%d",&b);
    printf("Enter Angle C: ");
    scanf("%d",&c);
    if(a+b+c!=180){
        printf("It is not a valid triangle\n");
        if(a==0 || b==0 || c==0)
        {
          printf("It is not a valid triangle\n");
        }
        
    }
    else if(a==90 || b==90 || c==90){
        printf("It is a right angle triangle\n");
    }
    else if(a<90 && b<90 && c<90){
        printf("All three are acute angle \n");
    }
    else if(a>90 || b>90 || c>90){
        printf("It is an obtuse angle triangle\n");

    }


}