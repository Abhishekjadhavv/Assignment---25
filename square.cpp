// Define a class Square to find the square of a number.

#include <iostream>
using namespace std;

class Square
{
public:
    int square(int n)
    {
        return n * n;
    }
};
int main()
{
    Square s;
    int square = s.square(6);
    cout << "Square is " << square << endl;
    return 0;
}