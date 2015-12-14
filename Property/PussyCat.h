#pragma once
#include "icat.h"
class PussyCat :
	public ICat
{
public:
	PussyCat(void);
	PussyCat(const PussyCat& cat);
	virtual ~PussyCat(void);
	ICat* Clone();
};

