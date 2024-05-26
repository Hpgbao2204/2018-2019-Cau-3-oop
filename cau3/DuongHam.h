#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "Trap.h"

class DuongHam : public Trap
{
private:
	int ChieuCao[7];
public:
	void Nhap();
	bool Pass();
};

