#include "AbstractClass.h"

int main()
{
	AbstractClass* ptr = new ConcreateClass;
	ptr->Operation();
	delete ptr;
}