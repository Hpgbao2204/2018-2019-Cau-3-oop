#pragma once

#include <iostream>
#include "string"

using namespace std;

class TheXe
{
protected:
	string MaSo;
	int So_Luong_The_Xe;
	TheXe* ds[50];
	int Loai_The;
public:
	virtual void Nhap();
	virtual int Dem_So_Xe_May();
	virtual int Tong_Tien();
	virtual void Xuat();
};

