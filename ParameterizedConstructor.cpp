#include <iostream>
using namespace std;
class ParamA
{
private:
    int a, b;
public:
    ParamA(int b1, int c1)
    {
        a = b1;
        b = c1;
    }
    int getX()
    {
        return a;
    }
    int getY()
    {
        return b;
    }
};
int main()
{
    ParamA p1(10, 15);
    cout << "p1.a = " << p1.getX() << ", p1.b = " << p1.getY();
    return 0;
}