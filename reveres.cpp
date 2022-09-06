// Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.

#include <iostream>
using namespace std;

class ReverseNumber
{
public:
    int reverseNumber(int n)
    {
        int result = 0;
        while (n)
        {
            int r = n % 10;
            result = result * 10 + r;
            n /= 10;
        }

        return result;
    }
};

int main()
{
    ReverseNumber r;
    int rev = r.reverseNumber(7546);
    cout << "Reverse number is " << rev << endl;
    return 0;
}
