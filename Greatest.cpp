// Define a class Greatest and define instance member function to find Largest among
// 3 numbers using classes.

#include<iostream>
using namespace std;

class Greatest{
  public:
   int greatestNumber(int a, int b, int c)
    {
        return a > b ? a > c ? a : c : b > c ? b : c;                                          
    }
};
int main(){
    Greatest g;
    int max = g.greatestNumber(5, 3, 4);
    cout << "Greatest number is " << max << endl;
    return 0;
}