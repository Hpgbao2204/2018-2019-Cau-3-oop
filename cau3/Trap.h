#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "NguoiChoi.h"

class Trap
{
protected:
	NguoiChoi NguoiChoi1;
public:
	virtual void Nhap();
	virtual bool Pass();
};

