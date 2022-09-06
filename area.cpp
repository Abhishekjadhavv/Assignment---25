// 10. Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc.

#include<iostream>
using namespace std;

class Area{
  public:
  int areaCircle(int r){
   return 3.14 * (r*r);
  }
  int areaRectangle(int l,int w){
   return l*w;
  }
  int areaSquare(int n){
    return n*n;
  }
};

int main(){
    Area a;
    cout<<"Area of circle is "<<a.areaCircle(20)<<endl;
    cout<<"Area of rectangle is "<<a.areaRectangle(20,40)<<endl;
    cout<<"Area of Square is "<<a.areaSquare(20)<<endl;
    return 0;
}