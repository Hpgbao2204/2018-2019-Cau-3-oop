#include "XeMay.h"


void XeMay::Nhap()
{
	cout << "Nhap bien so xe:";
	getline(cin >> ws, BienSo);

	cout << "Nhap loai the xe: ";
	cout << "0. Can bo, 1. Sinh vien, 2. Khach vang lai: ";
	cin >> Loai_The;
}

void XeMay::Xuat()
{
	cout << "Xe may ";
	cout << "Bien so xe: " << BienSo << " ";
	cout << "Loai the xe: " << Loai_The;
}

int XeMay::Dem_So_Xe_May()
{
		return 1;
}

int XeMay::Tong_Tien()
{
	return 5000 * Loai_The;
}