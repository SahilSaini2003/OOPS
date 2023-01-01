#include <iostream>
#include <string>
using namespace std;
class sample
{
    int length, breadth;
public:
    sample(int length, int breadth) : length(length), breadth(breadth)
    {}
    friend void calcArea(sample s); // friend function declaration
};
// friend function definition
void calcArea(sample s)
{
    cout << "Area = " << s.length * s.breadth;
}
int main()
{
    sample s(10, 15);
    calcArea(s);
    return 0;
}
