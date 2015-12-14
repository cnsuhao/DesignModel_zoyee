#pragma once
#include "icathouse.h"
class PussyCatHouse :
	public ICatHouse
{
public:
	PussyCatHouse(void);
	virtual ~PussyCatHouse(void);
	ICat* CreateCat();
};

