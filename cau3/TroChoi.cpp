#include "TroChoi.h"
#include "NguoiChoi.h"
#include "KhuRung.h"
#include "DuongHam.h"
#include "QuaiVat.h"
#include "Trap.h"

void TroChoi::Nhap()
{
	cout << "Nhap so luong trap: ";
	cin >> Num_of_Trap;

	int Type_of_Trap;

	for (int i = 0; i < Num_of_Trap; i++)
	{
		cout << "Nhap loai trap ";
		cout << "1. Khu rung, 2. Duong ham, 3. Quai vat: ";
		cin >> Type_of_Trap;

		switch (Type_of_Trap)
		{
		case 1:
			ds[i] = new KhuRung;
			break;
		case 2:
			ds[i] = new DuongHam;
			break;
		case 3:
			ds[i] = new QuaiVat;
			break;
		}

		ds[i]->Nhap();
	}
}

bool TroChoi::Pass()
{
	for (int i = 0; i < Num_of_Trap; i++)
	{
		if (ds[i]->Pass())
			return false;
	}
	return true;
}