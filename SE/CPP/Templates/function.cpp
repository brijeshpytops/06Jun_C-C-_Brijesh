#include <iostream>
using namespace std;

template <typename temp>
temp add(temp num1, temp num2){
    return num1 + num2;
}


int main() {
    cout << add(3, 4)<<endl;
    cout << add(3.5, 4.5)<<endl;
    cout << add('A', 'B')<<endl;
    return 0;
}