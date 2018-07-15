#include <iostream>
class A {
	
	int m_obj;
	std::string m_str;
	
	public:
		A(int mvalue = 0 , std::string mstring = "Emrty") : m_obj(mvalue) , m_str(mstring) {}
		
		~A() {}
		
		void foo() {
			std::cout << "A's foo function" <<std::endl;
		}
		
		int get_int() {
			return m_obj;
		}
		
		std::string get_string() {
			return m_str;
		}
};

class B : public A {
	double y;
	
	public:
		B(double value) : y(value) {}
		
		double get_double() {
			return y;
		}
		
		
};

int main()
{
	A* ob = new A(4,"mama");
	int x = ob->get_int();
	std::string s = ob->get_string();
	std::cout << x << " " << s << std::endl;
	B* ob1 = new B(3.14);
	double x1 = ob1->get_double();
	int x2 = ob1->get_int();
	std::string s1 = ob1->get_string();
	std::cout << x1 << " " << x2 << " " << s1 << std::endl;
	
	return 0;
}
