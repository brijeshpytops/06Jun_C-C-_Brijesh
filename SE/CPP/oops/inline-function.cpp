#include <iostream>
using namespace std;

// Inline function definition
inline int add(int x, int y) {
    return x + y;
}

int main() {
    int a = 5, b = 10;

    // Calling the inline function
    int sum = add(a, b);  // The compiler may replace this with the expression `a + b`
    
    cout << "Sum: " << sum << endl;

    return 0;
}
