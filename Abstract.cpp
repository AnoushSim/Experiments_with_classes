#include <iostream>

class Abstract {

    int x;
    double y;
    
 public:
 
    virtual void foo() = 0;
    int getX() { return x ; }
    double getY () { return y ; }
};

class Derived : public Abstract {
    
    int ix;
    
    public:
    
    void foo() {
        std::cout << "Foo is called on derived class object!";
    }
    
};

int main()
{
    Derived derived;
    derived.foo();
    return 0;
}
