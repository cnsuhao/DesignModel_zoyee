#include "SubJect.h"

int main()
{
	CProxy *pProxy = new CProxy;//对外都是 Proxy, 里面是realsubject, 平时先占位不创建, 等要使用时再创建
	pProxy->Operation();
	delete pProxy;
}