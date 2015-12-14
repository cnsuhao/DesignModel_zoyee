#include "PussyCatHouse.h"
#include "PussyCat.h"

PussyCatHouse::PussyCatHouse(void)
{
}


PussyCatHouse::~PussyCatHouse(void)
{
}

ICat* PussyCatHouse::CreateCat()
{
	cout << "波斯猫屋, 创建波斯" <<endl;
	return new PussyCat;
}
