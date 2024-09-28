#include <iostream>
using namespace std;

class ATM{
    private:
    int pin;
    
    public:
    
    // syntax of constructor:
    // className(){
        // block of code
    // }
    ATM(int p){
        
        pin = p;
    }
    
    int show_pin(){
        return pin;
    }
    // syntax of destructor:
    // ~className(){
        // block of code
    // }
    
    ~ATM(){
        cout<<"I am a destructor"<<endl;
    }
    
};

int main() {
    ATM brijesh(1111);
    ATM eric(2222);
    // cout<<brijesh.pin<<endl;
    // cout<<brijesh.show_pin();
    

    return 0;
}