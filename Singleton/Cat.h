#pragma once
#include <iostream>
using namespace  std;
class Cat
{
public:
	Cat(void);
	~Cat(void);

	static Cat* Instance();
	void Moe();
private:
	static Cat* m_pInstance;
};

