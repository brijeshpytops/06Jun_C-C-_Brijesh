#include <iostream>
using namespace std;

class Lecture{
    public:
    string name;
    string subject;
    string course;
    int lectures;
    
    void lectureDetails(string n, string s, string c, int l){
        name = n;
        subject = s;
        course = c;
        lectures = l;
        
        lectureInfo();
        
    }
    
    void lectureInfo(){
        cout<<"Faculty name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"course: "<<course<<endl;
        cout<<"Number of lecturers: "<<lectures<<endl;
    }
    
    
};

int main() {
    Lecture l1;
    l1.lectureDetails("brijesh", "python", "python programming for everybody", 2);
    return 0;
}
