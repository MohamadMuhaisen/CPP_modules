#ifndef BASE_HPP
#define BASE_HPP

#include <stdlib.h>
#include <time.h>
#include <iostream>

class Base
{
	public:
		virtual ~Base();
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif