// 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.
#include <iostream>
using namespace std;

class Time
{
private:
    int hr, min, sec;

public:
    void set(int hr, int min, int sec)
    {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }
    void display()
    {
        cout << this->hr << " hr " << this->min << " min " << this->sec << " sec " << endl;
    }
};

int main()
{
    Time t1;
    t1.set(3, 45, 20);
    t1.display();
    return 0;
}