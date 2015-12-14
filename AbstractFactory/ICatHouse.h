#pragma once

#include <iostream>
using namespace std;

#include "ICat.h"

class ICatHouse
{
public:
	ICatHouse(void);
	virtual ~ICatHouse(void);
	virtual ICat* CreateCatA() = 0;
	virtual ICat* CreateCatB() = 0;
};

class NativeCatHouse : public ICatHouse
{
public:
	virtual ICat* CreateCatA();
	virtual ICat* CreateCatB();
};

class ForeginCatHouse : public ICatHouse
{
public:
	virtual ICat* CreateCatA();
	virtual ICat* CreateCatB();
};

