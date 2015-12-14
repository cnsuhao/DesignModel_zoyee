#pragma once
#include <iostream>
using namespace std;

class ICat
{
public:
	ICat(void);	
	ICat(const ICat& propertyCat);

	virtual ~ICat(void);
	virtual ICat* Clone() = 0;//ĞéÄâ¹¹Ôìº¯Êı
	char szColor[32];
	char szMoe[32];
};

