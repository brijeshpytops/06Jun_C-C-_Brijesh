#include <iostream>

// Class template that works with any data type
template <typename T>
class Box {
private:
    T value;
public:
    Box(T v) : value(v) {}

    T getValue() {
        return value;
    }
};

int main() {
    Box<int> intBox(123);       // Box with an integer
    Box<double> doubleBox(45.67); // Box with a double

    std::cout << intBox.getValue() << std::endl;
    std::cout << doubleBox.getValue() << std::endl;
    
    return 0;
}
