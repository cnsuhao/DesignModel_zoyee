#include "AmericanShortHairCat.h"


AmericanShortHairCat::AmericanShortHairCat(void)
{
	strcpy(szColor, "黑白灰花纹");
	strcpy(szMoe, "歪头");
	cout << "美短的毛色是" << szColor << endl;
	cout << "美短的卖萌技巧是" << szMoe << endl;
}

AmericanShortHairCat::AmericanShortHairCat( const AmericanShortHairCat& cat )
{
	strcpy(szColor, cat.szColor);
	cout << "克隆美短卖萌技巧是"<< szMoe << endl;
	cout << "克隆美短的毛色是"  << szColor <<  endl;
}


AmericanShortHairCat::~AmericanShortHairCat(void)
{
}

ICat* AmericanShortHairCat::Clone()
{
	return new AmericanShortHairCat(*this);
}
