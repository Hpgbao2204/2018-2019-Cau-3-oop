#include "DuongHam.h"

void DuongHam::Nhap()
{	
	cout << "Nhap chieu cao duong ham: ";
	for (int i = 0; i < 5; i++)
	{
		int temp;
		cin >> temp;
		ChieuCao[i] = temp;
	}
}



bool DuongHam::Pass()
{
	for (int i = 0; i < 5; i++)
	{
		if (NguoiChoi1.GetChieuCao(i) <= ChieuCao[i])
			return false;
	}
	return true;
}