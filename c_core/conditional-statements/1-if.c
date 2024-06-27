// An if statement in C is a conditional statement that allows a block of code to be executed only if a specified condition is true. If the condition evaluates to false, the block of code is skipped or an alternative block of code may be executed using else.

// syntax:

// if (condition) {
//     // code to execute if the condition is true
// }

#include<stdio.h>

void main(){
    // int a = -10;
    // if(a > 0){
    //     printf("a must be less than zero");
    // }

    // float bal = 550.54;
    // float withdrow = 600.0;
    // if(withdrow <= bal){
    //     printf("You can withdraw");
    // }

    int age = 20;
    float weight = 34.767;
    if(age >= 18 && weight >= 50.0){
        printf("You are eligible to donate");
    }

}
