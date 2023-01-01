#include <iostream>
using namespace std;
class DemoDC
{
private:
    int num1, num2;
public:
    DemoDC()
    {
        num1 = 10;
        num2 = 20;
    }
    void display()
    {
        cout << "num1 = " << num1 << endl;
        cout << "num2 = " << num2 << endl;
    }
};
int main()
{
    DemoDC obj;
    obj.display();
    return 0;
}