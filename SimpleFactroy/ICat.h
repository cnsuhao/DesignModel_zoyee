#pragma once

#include <iostream>
using namespace std;

class ICat
{
public:
	ICat(void);
	virtual ~ICat(void);

	virtual void Moe() = 0;
};

