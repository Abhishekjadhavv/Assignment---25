// 1. Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    void set(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void print(){
        cout<<this->real<<" + "<<this->imaginary<<"i"<<endl;
    }
};

int main()
{
    Complex c1, c2;
    c1.set(3,4);
    c2.set(5,7);
    c1.print();
    c2.print();
    return 0;
}