#include "Cat.h"

int main()
{
	Cat* pCatA = Cat::Instance();
	pCatA->Moe();

	Cat* pCatB = Cat::Instance();
	pCatB->Moe();

}