#include <iostream>

class Singleton {
private:
    
    Singleton() { std::cout << "Singleton instance created!" << std::endl; }
    ~Singleton() {}

    static Singleton* _instance;
    
public:
    static Singleton* getInstance() {

    if (!_instance) 
        _instance = new Singleton; 
    return _instance;
    }
    
    static void release_instance() {
	delete _instance;
	_instance = nullptr;
}

};

Singleton* Singleton::_instance = nullptr;



int main() {

    Singleton* singleton;
    singleton = singleton->getInstance();
    std::cout << singleton << std::endl;

    Singleton *anotherSingleton;
    anotherSingleton = anotherSingleton->getInstance();
    std::cout << anotherSingleton << std::endl;


    return 0;
}
