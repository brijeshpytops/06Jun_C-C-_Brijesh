// single:

#include <iostream>
using namespace std;

class A{
    public:
    void a(){
        cout<<"i am from class A"<<endl;
    }
};

class B: public A{
    public:
    void b(){
        cout<<"i am from class B"<<endl;
    }
};


int main() {
    
    // A obj1;
    // obj1.a();
    
    B obj2;
    obj2.a();
    obj2.b();
  
    return 0;
}



// Single inheritance with protected access speicifer

#include <iostream>
using namespace std;

class A{
    
// The protected access specifier is used in classes to restrict access to class members (data members or member functions). When a member is declared protected, it means that:

    // - The member is accessible within the class itself.
    // - The member is accessible within classes that inherit from the class.
    // - The member is not accessible outside of the class or the derived classes (i.e., cannot be accessed directly by objects of the class).
    protected:
    void a(){
        cout<<"i am from class A"<<endl;
    }
};

class B: public A{
    public:
    void b(){
        a();
        cout<<"i am from class B"<<endl;
    }
};


int main() {
    
    // A obj1;
    // obj1.a();
    
    B obj2;
    // obj2.a();
    obj2.b();
  
    return 0;
}


// multi-level 

#include <iostream>
using namespace std;

class A{
    public:
    void a(){
        cout<<"i am from class A"<<endl;
    }
};

class B: public A{
    public:
    void b(){
        cout<<"i am from class B"<<endl;
    }
};
class C: public B{
    public:
    void c(){
        cout<<"i am from class C"<<endl;
    }
};


int main() {
    
    // A obj1;
    // obj1.a();
    
    // B obj2;
    // // obj2.a();
    // obj2.b();
    
    
    C obj;
    obj.a();
    obj.b();
    obj.c();
  
    return 0;
}


// multiple

#include <iostream>
using namespace std;

class A{
    public:
    void a(){
        cout<<"i am from class A"<<endl;
    }
};

class B{
    public:
    void b(){
        cout<<"i am from class B"<<endl;
    }
};
class C: public A, public B{
    public:
    void c(){
        cout<<"i am from class C"<<endl;
    }
};


int main() {
    
    // A obj1;
    // obj1.a();
    
    // B obj2;
    // // obj2.a();
    // obj2.b();
    
    
    C obj;
    obj.a();
    obj.b();
    obj.c();
  
    return 0;
}


//Hierarchicle:

#include <iostream>
using namespace std;

class Shape{
    public:
    void shape(){
        cout<<"i am from class Shape"<<endl;
    }
};
class Shape2d: public Shape{
    public:
    void shape2d(){
        cout<<"i am from class Shape2d"<<endl;
    }
};
class Circle: public Shape2d{
    public:
    void circle(){
        cout<<"i am from class Circle"<<endl;
    }
};
class Square: public Shape2d{
    public:
    void square(){
        cout<<"i am from class Square"<<endl;
    }
};


class Shape3d: public Shape{
    public:
    void shape3d(){
        cout<<"i am from class Shape3d"<<endl;
    }
};

int main() {
    
    Circle c1;
    c1.shape();
    c1.shape2d();
    c1.circle();
    return 0;
}
