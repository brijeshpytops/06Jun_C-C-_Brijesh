// A switch statement in C is a control statement that allows a variable to be tested for equality against a list of values. Each value is called a case, and the corresponding code block is executed if the variable matches that case value.

// syntax: 

// switch (expression) {
//     case constant1:
//         // code to execute if expression matches constant1
//         break;
//     case constant2:
//         // code to execute if expression matches constant2
//         break;
//     // more cases as needed
//     default:
//         // code to execute if expression doesn't match any case
//         break;
// }

#include <stdio.h>

void main(){
    int day = 0;

    switch (day){
        case 0:
            printf("Today is Monday\n");
            break;
        case 1:
            printf("Today is Tuesday\n");
            break;
        case 2:
            printf("Today is Wednesday\n");
            break;
        case 3:
            printf("Today is Thursday\n");
            break;
        case 4:
            printf("Today is Friday\n");
            break;
        case 5:
            printf("Today is Saturday\n");
            break;
        case 6:
            printf("Today is Sunday\n");
            break;
        default:
           printf("Invalid day");
    }
   
}