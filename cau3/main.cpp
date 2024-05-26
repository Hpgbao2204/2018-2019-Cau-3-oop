#include "NguoiChoi.h"
#include "KhuRung.h"
#include "DuongHam.h"
#include "QuaiVat.h"
#include "TroChoi.h"

int main()
{
    NguoiChoi nguoiChoiA; // Đối tượng người chơi A
    nguoiChoiA.Nhap(); // Nhập dữ liệu cho người chơi A
    
    TroChoi A;
    A.Nhap();

    if (A.Pass())
        cout << "PASS";
    else
        cout << "Don't PASS";

    return 0;
}