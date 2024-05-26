#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "Trap.h"

class KhuRung : public Trap
{
private:
	int ChieuCao[7];
	int ChiSo; // Chi so cua qua tao
public:
	void Nhap();
	bool Pass();
};

