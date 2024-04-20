#include <iostream>
using namespace std;

class Base
{
public:
    void baseFunction()
    {
        std::cout << "Base function" << std::endl;
    }
};

class Derived : public Base
{
public:
    void derivedFunction()
    {
        std::cout << "Derived function" << std::endl;
    }
};

int main()
{
    Base *baseObj = new Base();
    // The following line would cause a compilation error:
    // Derived* derivedPtr = baseObj; // Invalid: Cannot point derived class pointer to base class object
    delete baseObj;
    return 0;
}