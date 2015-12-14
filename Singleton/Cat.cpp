#include "Cat.h"


Cat::Cat(void)
{
}

Cat::~Cat(void)
{
}

Cat* Cat::Instance()
{
	return m_pInstance;
}

void Cat::Moe()
{
	printf("我的id号是:%d, ", this);
	cout << "依然是我在卖萌" << endl;
}

Cat* Cat::m_pInstance = new Cat;
