#include "ICatHouse.h"
#include "ICat.h"
#include "INativeCat.h"
#include "IForeignCat.h"

ICatHouse::ICatHouse(void)
{
}


ICatHouse::~ICatHouse(void)
{
}

ICat* NativeCatHouse::CreateCatA()
{
	cout << "������԰è\n";
	return new TianyuanCat;
}

ICat* NativeCatHouse::CreateCatB()
{
	cout << "�����껨è\n";
	return new LihuaCat;
}

ICat* ForeginCatHouse::CreateCatA()
{
	cout << "��������\n";
	return new AmericanShortHairCat;
}

ICat* ForeginCatHouse::CreateCatB()
{
	cout << "������˹\n";
	return new PussyCat;
}
