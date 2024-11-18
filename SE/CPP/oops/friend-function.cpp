#include <iostream>
using namespace std;

class Triangle{
   private:
   int height;
   int base;
   
   public:
   Triangle(int h, int b){
       height = h;
       base = b;
   }
   
   friend void areaOfTri(Triangle t1);
};

void areaOfTri(Triangle t1){
    cout<<"Area of Tri: "<<0.5 *  t1.height *  t1.base;
}

int main() {
    Triangle t(10, 20);
    
    areaOfTri(t);
    
    return 0;
}
