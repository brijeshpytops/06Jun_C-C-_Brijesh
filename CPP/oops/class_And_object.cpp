// syntax of class
// class className{
    // access specifiers
    // attributes and properties [data member]

    // functions and methods [member functions]
// };

// syntax of object
// className obj_name1, obj_name2;

// Example: 1
#include <iostream>
using namespace std;

class Triangle{
    // access specifiers
    public:
    // attributes and properties
    float height, base;
    
    // functions and methods
    float area_of_tri(){
        return 0.5 * height * base;
    }
};

int main() {
    Triangle t1, t2;
    t1.height = 10;
    t1.base = 10;
    cout<<"t1 triangle area: "<<t1.area_of_tri()<<endl;
    
    t2.height = 20;
    t2.base = 20;
    cout<<"t2 triangle area: "<<t2.area_of_tri()<<endl;
    return 0;
}

// Example: 2
#include <iostream>
using namespace std;

class Auth{
    public:
  class Register{
      public:
        string username;
        string email;
        string password;
        string confirm_password;
        
        string user_registration(){
            cout<<"Username: "<<username<<endl;
            cout<<"Email: "<<email<<endl;
            cout<<"Password: "<<password<<endl;
            cout<<"Confirm password: "<<confirm_password<<endl;
            return "User registered successfully.";
        }
      
  };
};
  
//   class Login{
      
//   };
  
//   class ForgotPassword{
      
//   };
// };

int main() {
   Auth a1;
   Auth::Register u1;
   u1.username = "brijesh07";
   u1.email = "brijesh@gmail.com";
   u1.password = "test@123";
   u1.confirm_password = "test@123";
   cout<<u1.user_registration();
}