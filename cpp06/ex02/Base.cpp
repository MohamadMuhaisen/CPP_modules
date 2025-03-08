#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base* generate(void)
{
	std::srand(time(0));
	int x = std::rand() % 3;
	if (x == 0)
		return new A();
	else if (x == 1)
		return new B();
	else
		return new C();
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Object type: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Object type: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Object type: C" << std::endl;
	else
		std::cout << "Unkown type!!" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Object type: A" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Object type: B" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Object type: C" << std::endl;
	}
	catch(const std::exception& e) {}
}
