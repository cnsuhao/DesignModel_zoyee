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
	printf("�ҵ�id����:%d, ", this);
	cout << "��Ȼ����������" << endl;
}

Cat* Cat::m_pInstance = new Cat;
