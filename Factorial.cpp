// Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.

#include <iostream>
using namespace std;

class Factorial
{
public:
    int fact(int n)
    {
        int p = 1,temp  = n;
        while (temp)
        {
            p *= temp--;
        }
        cout<<"Factorial of "<<n<<" is "<<p<<endl;
    }
};

int main()
{
    Factorial f1;
    f1.fact(5);
    return 0;
}