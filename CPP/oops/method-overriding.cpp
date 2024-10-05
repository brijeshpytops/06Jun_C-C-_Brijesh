#include <iostream>
using namespace std;

class Math1{
    public:
     virtual void display(){
        cout<< "I am from parent class"<<endl;
    }
};
class Math2: public Math1{
    public:
    void display(){
        Math1::display();  // call parent class method
        cout<< "I am from child class"<<endl;
    }
};

int main() {
    Math1* m1;
    Math2 m2;
    m1 = &m2;
    m1->display();
    return 0;
}
