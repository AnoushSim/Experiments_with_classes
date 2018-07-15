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

int main()
{
	A* ob = new A(4,"mama");
	int x = ob->get_int();
	std::string s = ob->get_string();
	std::cout << x << " " << s;
	return 0;
}
