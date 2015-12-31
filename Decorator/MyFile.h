#ifndef __MY_FILE_H__
#define __MY_FILE_H__
#include <iostream>
using namespace std;

#define PF printf("[%s]\n", __FUNCTION__);

class IFileSys
{
public:
	IFileSys(){PF;};
	virtual ~IFileSys(){PF;};
	
	virtual void Operation() = 0;
};

class CMyFile : public IFileSys
{
public:
	CMyFile(void);
	virtual ~CMyFile(void);
	void Operation();
};

#endif