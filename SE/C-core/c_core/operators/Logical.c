/*
A B C && ||
T T T T  T
F T T F  T
T F T F  T
T T F F  T
F F F F  F

A !
T F
F T
*/

#include<stdio.h>

int main(){
    int a = 1; // 1 - True
    int b = 0; // 0 - False
    int c = 10 < 20; // True
    int res;

    // res = a && b && c; // 0
    // res = a || b || c; // 1
    // res = ((a && b) || (b || c)); // 1
    res = !a;
    printf("%d", res);
}