#include "TheXe.h"
#include "XeMay.h"
#include "XeDap.h"

int main()
{	
	TheXe A;
	A.Nhap();
	A.Xuat();

	int Tong_Tien = A.Tong_Tien();
	int So_Luong_Xe_May = A.Dem_So_Xe_May();

	cout << "Tong Tien: " << Tong_Tien << endl;
	cout << "So Luong Xe May: " << So_Luong_Xe_May << endl;
}