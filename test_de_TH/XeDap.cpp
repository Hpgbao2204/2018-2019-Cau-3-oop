#include "XeDap.h"


void XeDap::Nhap()
{
	cout << "Nhap loai the xe: ";
	cout << "0. Can bo, 1. Sinh vien, 2. Khach vang lai: ";
	cin >> Loai_The;
}

int XeDap::Tong_Tien()
{
	return 3000 * Loai_The;
}

void XeDap::Xuat()
{
	cout << "Xe Dap ";
	cout << "Loai the xe: " << Loai_The << endl;
}

int XeDap::Dem_So_Xe_May()
{
	return 0;
}