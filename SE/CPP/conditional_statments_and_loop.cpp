// conditionl statments and loops
#include<iostream>
using namespace std;

int main(){
    float bal = 10000.00;
    
    while(1){
        float wb;
        cout<<"Enter an amount: ";
        cin>>wb;
        
        cout<<"You have enterd withdrow bal: "<<wb<<endl;
        if (wb >= 500){
            if (wb <= bal){
                bal=bal-wb;
                cout<<"Now remaining amout is: "<<bal<<endl;
                cout<<"Balance withdrow successfully done."<<endl;
            }else{
                cout<<"Insufficent balance";
            }
        }else{
            cout<<"Withdrow amount must be grater than 500"<<endl;
        }
    }
  
}
