#include <iostream>
using namespace std;

int main() 
{
    float marks[5];
    int len = sizeof(marks)/sizeof(marks[0]);
    
    for(int mark = 0; mark < len; mark++){
        cout<<"Enter your sub- "<<mark+1<<" : ";
        cin>>marks[mark];
    }
    
    float total_score = 0;
    for(int mark = 1; mark <= len; mark++){
      total_score += marks[mark-1];
    }
    
    cout<<(total_score/len);
}