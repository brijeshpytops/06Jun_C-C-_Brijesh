#include <iostream>
using namespace std;

int main() {
    int array[] = {
       1,5,88,22,3
    };
   
    int len = sizeof(array)/sizeof(array[0]);
    int s = 1;
    while(s<=len){
        
        for(int start = 0; start < len-1; start++){
    
            if (array[start] > array[start+1]){
                int temp = array[start];
                array[start] = array[start+1];
                array[start + 1] = temp;
            }
        }
        s+=1;
    }
    
    for(int start = 0; start < len; start++){
        cout<<array[start]<<" ";
    }
    
    return 0;
}