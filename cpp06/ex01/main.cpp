#include "Serializer.hpp"

int main(void)
{
	Data *d1 = new Data;
	
	d1->value = 42;
	uintptr_t raw = Serializer::serialize(d1);
	Data *d2 = Serializer::deserialize(raw);
	std::cout << "d2 value: " << d2->value << std::endl;
	delete d1;
}