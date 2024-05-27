#include "TheXe.h"
#include "XeMay.h"
#include "XeDap.h"

void TheXe::Nhap()
{
	cout << "Nhap so luong the xe: ";
	cin >> So_Luong_The_Xe;
	


	int Loai_Xe;

	for (int i = 0; i < So_Luong_The_Xe; i++)
	{
		cout << "Nhap Ma So: ";
		getline(cin >> ws, MaSo);

		cout << "Nhap loai xe: 1. Xe dap, 2. Xe may: ";
		cin >> Loai_Xe;

		if (Loai_Xe == 1)
		{
			ds[i] = new XeDap;
			ds[i]->Nhap();
		}
		else if (Loai_Xe == 2)
		{
			ds[i] = new XeMay;
			ds[i]->Nhap();
		}
	}
}

int TheXe::Tong_Tien()
{
	int Tong = 0;
	for (int i = 0; i < So_Luong_The_Xe; i++)
	{
		Tong += ds[i]->Tong_Tien();
	}

	return Tong;
}

void TheXe::Xuat()
{
	for (int i = 0; i < So_Luong_The_Xe; i++)
	{
		cout << "Ma so the xe: " << MaSo << endl;
		ds[i]->Xuat();
	}
}

int TheXe::Dem_So_Xe_May()
{
	int Count = 0;
	for (int i = 0; i < So_Luong_The_Xe; i++)
	{
		Count += ds[i]->Dem_So_Xe_May();
	}
	
	return Count;
}