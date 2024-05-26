#pragma once

#include <iostream>
#include <string>
using namespace std;

class NguoiChoi
{
private:
	int ChieuCao[7];
	int SucManh[5];
public:
	void Nhap();
	void Xuat();
	bool Pass();

	void SetChieuCao(int, int);
	int GetChieuCao(int) const;

	int GetSucManh(int) const;
};

