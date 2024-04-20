#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "Base display" << endl;
    }
};

class Derived : public Base
{
public:
    void display() override
    {
        cout << "Derived display" << endl;
    }
};

int main()
{
    Base *basePtr = new Derived(); // Base pointer pointing to a derived class object
    basePtr->display();            // Calls the overridden method in the derived class
    delete basePtr;

    // But this is not possible
    // Derived *derivedPtr = new Base();
    // derivedPtr->display();
    
    return 0;
}
