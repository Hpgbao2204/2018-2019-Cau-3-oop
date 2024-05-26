#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "Trap.h"
#include "NguoiChoi.h"

class QuaiVat : public Trap
{
private:
	int SucManh[5];
public:
	void Nhap();
	bool Pass();
};

