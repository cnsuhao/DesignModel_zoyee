#include "SubJect.h"

int main()
{
	CProxy *pProxy = new CProxy;//���ⶼ�� Proxy, ������realsubject, ƽʱ��ռλ������, ��Ҫʹ��ʱ�ٴ���
	pProxy->Operation();
	delete pProxy;
}