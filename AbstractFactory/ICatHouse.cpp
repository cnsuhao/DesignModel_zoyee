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
	cout << "创建田园猫\n";
	return new TianyuanCat;
}

ICat* NativeCatHouse::CreateCatB()
{
	cout << "创建狸花猫\n";
	return new LihuaCat;
}

ICat* ForeginCatHouse::CreateCatA()
{
	cout << "创建美短\n";
	return new AmericanShortHairCat;
}

ICat* ForeginCatHouse::CreateCatB()
{
	cout << "创建波斯\n";
	return new PussyCat;
}
