// 4. Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.

#include <iostream>
using namespace std;

class LargestNumber
{
public:
    int largestNumber(int a, int b, int c)
    {
        return a > b ? a > c ? a : c : b > c ? b : c;                                          
    }
};

int main()
{
    LargestNumber l;
    int max = l.largestNumber(5, 3, 4);
    cout << "Largest number is " << max << endl;
    return 0;
}