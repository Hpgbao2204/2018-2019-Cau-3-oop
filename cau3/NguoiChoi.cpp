#include "NguoiChoi.h"

void NguoiChoi::Nhap()
{
	cout << "Nhap so chieu cao: ";
	for (int i = 0; i < 7; i++)
	{
		int temp;
		cin >> temp;
		ChieuCao[i] = temp;
	}
		
	cout << "Nhap so suc manh: ";
	for (int i = 0; i < 5; i++)
	{
		int temp;
		cin >> temp;
		SucManh[i] = temp;
	}
}

void NguoiChoi::Xuat()
{
	cout << "OK";
}

bool NguoiChoi::Pass()
{
	return true;
}

void NguoiChoi::SetChieuCao(int index, int value)
{
	if (index >= 0 && index <= 7)
		ChieuCao[index] = value;
}

int NguoiChoi::GetChieuCao(int index) const
{
	if (index >= 0 && index <= 7)
		return ChieuCao[index];
	return -1;
}

int NguoiChoi::GetSucManh(int index) const
{
	if (index >= 0 && index <= 5)
		return SucManh[index];
	return -1;
}