#pragma once
#include "Trap.h"
#include "NguoiChoi.h"

class TroChoi
{
private:
	int Num_of_Trap;
	Trap* ds[50];
	NguoiChoi NguoiChoi1;
public:
	void Nhap();
	bool Pass();
};

