#include <stdio.h>

void main(){
    int day = 4;

    switch (day){
        case 0:
            printf("Today is Monday");
            break;
        case 1:
            printf("Today is Tuesday");
            break;
        case 2:
            printf("Today is Wednesday");
            break;
        case 3:
            printf("Today is Thursday");
            break;
        case 4:
            printf("Today is Friday");
            break;
        case 5:
            printf("Today is Saturday");
            break;
        case 6:
            printf("Today is Sunday");
            break;
        default:
           printf("Invalid day");
    }

}
