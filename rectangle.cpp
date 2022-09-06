// Define a class Rectangle and define an instance member function to find the area of
// the rectangle.
#include<iostream>
using namespace std;

class Rectangle{
   public:
    int areaRect(int l,int w){
      return l * w;
    }

};

int main(){
    Rectangle rect;
    int area = rect.areaRect(20,40);
    cout<<"Area of rectangle is "<<area<<endl;
    return 0;
}