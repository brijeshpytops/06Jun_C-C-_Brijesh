#include <stdio.h>

void main(){
    int score;
    printf("Please enter your score: ");
    scanf("%d", &score);

    if ((score >= 0) && (score <= 100)){
        if (score >= 60){
            printf("Class A");
        } else if (score >= 70){
            printf("Class B");
        } else if (score >= 80){
            printf("Class C");
        } else{
            printf("Sorry, you are failed to score");
        }
    } else {
        printf("Invalid score. Please enter score between (0-100).\n");
    }


}
