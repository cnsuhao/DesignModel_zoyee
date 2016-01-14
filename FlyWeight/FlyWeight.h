#ifndef __FLY_WEIGHT_H__
#define __FLY_WEIGHT_H__

class IFlyWeight
{
public:
	IFlyWeight(void);
	virtual ~IFlyWeight(void);

	virtual void Operation() = 0;
};

class CFactory
{
public:
	IFlyWeight* GetFW(int nState);

};

#endif