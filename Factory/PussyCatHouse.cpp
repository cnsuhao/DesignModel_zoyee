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
	cout << "��˹è��, ������˹" <<endl;
	return new PussyCat;
}
