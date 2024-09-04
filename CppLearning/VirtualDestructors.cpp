//#include <iostream>
//
//class Base {
//public:
//	Base() { std::cout << "Base Constructer" << std::endl; };
//	virtual ~Base() { std::cout << "Base Destructor" << std::endl; };
//};
//
//class Derived : public Base {
//public:
//	Derived() { std::cout << "Derived Constructor" << std::endl; };
//	~Derived() { std::cout << "Derived Destructor" << std::endl; };
//
//	void Print() {};
//};
// 
//int main() {
//
//	Base* b = new Base();
//	delete b;
//	std::cout << "-------------------------------------\n";
//	Derived* d = new Derived();
//	delete d;
//	std::cout << "-------------------------------------\n";
//	Base* poly = new Derived();
//	delete poly;
//
//	system("pause");
//
//	return 0;
//}