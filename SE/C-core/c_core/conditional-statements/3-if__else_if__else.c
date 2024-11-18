// An if-else if-else ladder is a series of if, else if, and else statements that allows a program to test multiple conditions in sequence. If one of the conditions is true, the corresponding block of code is executed, and the remaining conditions are skipped.

// syntax: 

// if (condition1) {
//     // code to execute if condition1 is true
// } else if (condition2) {
//     // code to execute if condition1 is false and condition2 is true
// } else if (condition3) {
//     // code to execute if condition1 and condition2 are false and condition3 is true
// } else {
//     // code to execute if all conditions are false
// }

#include <stdio.h>

void main(){
    int score;
    printf("Please enter your score: ");
    scanf("%d", &score);

    if ((score >= 0) && (score <= 100)){
        if (score >= 80){
            printf("Class A");
        } else if (score >= 60){
            printf("Class B");
        } else if (score >= 40){
            printf("Class C");
        } else{
            printf("Sorry, you are failed to score");
        }
    } else {
        printf("Invalid score. Please enter score between (0-100).\n");
    }

    
}