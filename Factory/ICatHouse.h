#pragma once
#include <iostream>
using namespace std;
class ICat;
class ICatHouse
{
public:
	ICatHouse(void);
	virtual ~ICatHouse(void);
	virtual ICat* CreateCat() = 0;
};

