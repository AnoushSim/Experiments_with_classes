#include <iostream>

class makeFinal {
    makeFinal() { std::cout << "makeFinal ctor" << std::endl; }
    ~makeFinal() { std::cout << "makeFinal dtor" << std::endl; }
    friend class Final;
};

class Final : virtual public makeFinal {
    public:
    Final() { std::cout << "Final ctor" << std::endl; }
    ~Final() { std::cout << "Final dtor" << std::endl; }
};

class Derived : public Final {
    Derived() { cout << "Derived ctor" << endl; }
    ~Derived() { cout << "Derived dtor" << endl; }
};

int main()
{
    Derived derived;
    return 0;
}
