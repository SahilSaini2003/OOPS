#include <iostream>
using namespace std;
class Base_class
{
public:
    void display()
    {
        cout << " It is the first function of the Base class " << endl;
    }
};
class Base_class2
{
public:
    void display2()
    {
        cout << " It is the second function of the Base class " << endl;
    }
};
class child_class : public Base_class, public Base_class2
{
public:
    void display3()
    {
        cout << " It is the function of the derived class " << endl;
    }
};
int main()
{
    child_class ch;
    ch.display();
    ch.display2();
    ch.display3();
}