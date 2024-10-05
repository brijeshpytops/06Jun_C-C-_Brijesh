#include <iostream>
using namespace std;

class Math{
    public:
    void add(int a, int b){
        cout<<"Total = "<< a + b<<endl;
    }
    void add(int a, int b, int c){
        cout<<"Total = "<<a + b + c<<endl;
    }
    void add(float a, float b, float c){
        cout<<"Total = "<<a + b + c <<endl;
    }
};


int main() {
    Math m1;
    // m1.add(10, 20);
    // m1.add(10, 20, 30);
    m1.add(10.0, 20.0, 30.0);
   
    return 0;
}
