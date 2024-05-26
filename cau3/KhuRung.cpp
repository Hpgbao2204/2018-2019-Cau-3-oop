#include "KhuRung.h"

void KhuRung::Nhap()
{
	cout << "Nhap so chieu cao khu rung: ";
	for (int i = 0; i < 7; i++)
	{
		int temp;
		cin >> temp;
		ChieuCao[i] = temp;
	}

	cout << "Nhap chi so qua tao: ";
	cin >> ChiSo;

}

bool KhuRung::Pass()
{
	for (int i = 0; i < 7; i++)
	{
		if (NguoiChoi1.GetChieuCao(i) + ChiSo <= ChieuCao[i])
			return false;
	}
	return true;
} 

