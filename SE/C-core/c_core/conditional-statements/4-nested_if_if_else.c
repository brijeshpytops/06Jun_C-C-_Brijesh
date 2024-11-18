// A nested if statement in C is an if statement that is placed inside another if or else statement. It allows for more complex decision-making by checking additional conditions only if the outer condition is true.

#include <stdio.h>

void  main(){
    int age;
    float weight;
    printf("Enter age: ");
    scanf("%d", &age);
   

    if(age >= 18){ 
        printf("Enter weight: ");
        scanf("%f", &weight);
        if (weight >= 50.0){
            printf("You are eligible to donate");
        } else {
            printf("You are not eligible to donate");
        }
    } else {
        printf("You are not eligible to donate");
    }
}