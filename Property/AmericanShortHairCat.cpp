#include "AmericanShortHairCat.h"


AmericanShortHairCat::AmericanShortHairCat(void)
{
	strcpy(szColor, "�ڰ׻һ���");
	strcpy(szMoe, "��ͷ");
	cout << "���̵�ëɫ��" << szColor << endl;
	cout << "���̵����ȼ�����" << szMoe << endl;
}

AmericanShortHairCat::AmericanShortHairCat( const AmericanShortHairCat& cat )
{
	strcpy(szColor, cat.szColor);
	cout << "��¡�������ȼ�����"<< szMoe << endl;
	cout << "��¡���̵�ëɫ��"  << szColor <<  endl;
}


AmericanShortHairCat::~AmericanShortHairCat(void)
{
}

ICat* AmericanShortHairCat::Clone()
{
	return new AmericanShortHairCat(*this);
}
