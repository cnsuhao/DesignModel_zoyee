#include "PussyCat.h"

PussyCat::PussyCat(void)
{
	strcpy(szColor, "纯白");
	strcpy(szMoe, "握手");
	cout << "波斯的毛色是" << szColor << endl;
	cout << "波斯的卖萌技巧是" << szMoe << endl;
}

PussyCat::PussyCat( const PussyCat& cat )
{
	strcpy(szMoe, cat.szMoe);
	cout << "克隆波斯卖萌技巧是"<< szMoe << endl;
	cout << "克隆波斯的毛色是"  << szColor <<  endl;
}


PussyCat::~PussyCat(void)
{
}

ICat* PussyCat::Clone()
{	
	return new PussyCat(*this);
}
