#include <iostream>
using namespace std;

class ATM{
    private:
    int pin;
    
    public:
    void setPin(int p){
        pin = p;
    }
    
    void getPin(){
        cout<<pin<<endl;
    }
};

int main() {
    ATM brijesh;
    ATM eric;
    brijesh.setPin(1111);
    brijesh.getPin();
    
    eric.setPin(2222);
    eric.getPin();

    return 0;
}