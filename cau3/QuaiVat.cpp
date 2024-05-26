#include "QuaiVat.h"

void QuaiVat::Nhap()
{
	cout << "Nhap so suc manh: ";
	for (int i = 0; i < 5; i++)
	{
		int temp;
		cin >> temp;
		SucManh[i] = temp;
	}
}


bool QuaiVat::Pass()
{
	for (int i = 0; i < 5; i++)
	{
		if (NguoiChoi1.GetSucManh(i) <= SucManh[i])
			return false;
	}
	return true;
}