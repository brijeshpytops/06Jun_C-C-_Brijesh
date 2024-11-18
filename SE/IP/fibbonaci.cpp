#include <iostream>
using namespace std;

int main() {
    
    int num;
    int n1 = 0;
    int n2 = 1;
    int nth;
    cout<<"Enter a num: ";
    cin>>num;
    
    
    for(int start = 1; start<= num; start++){
        if(start == 1){
            cout<<n1<<endl;
            continue;
        }else if (start == 2){
            cout<<n2<<endl;
        }else{
            nth = n1+n2;
            n1 = n2;
            n2 = nth;
            cout<<nth<<endl;
        }
    }

    

    return 0;
}

// 0 1 1 2 3 5