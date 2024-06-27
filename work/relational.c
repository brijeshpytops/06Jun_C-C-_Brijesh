#include <stdio.h>
int main(){
    // 0 - false
    // 1 - true
    int a= 20, b = 30, res;
    res = a == b;
    res = a != b;
    res = a > b;
    res = a < b;
    res = a <= b;
    printf("%d", res);
    return 0;
}
