// Define a class Circle and define an instance member function to find the area of the
// circle.

#include<iostream>

using namespace std;

class Circle{
   public:
   float areaCircle(int r){
    return 3.14 * (r*r);
   }
};

int main(){
    Circle circle;
    cout<<"Area of circle is "<<circle.areaCircle(20);
    return 0;
}