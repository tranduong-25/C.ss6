#include <stdio.h>
#include <math.h>

int main() {
    double tienBanDau, laiSuat, soThang, tienLai, tongTien;

    printf("Nhap so tien luc dau: ");
    scanf("%lf", &tienBanDau);

    printf("Nhap lai suat thang (%%): ");
    scanf("%lf", &laiSuat);

    printf("Nhap so thang gui: ");
    scanf("%lf", &soThang);

    laiSuat = laiSuat / 100;

    tongTien = tienBanDau * pow(1 + laiSuat, soThang);

    tienLai = tongTien - tienBanDau;

    printf("Tien lai: %.3lf\n", tienLai);
    printf("Tong so tien nhan duoc: %.3lf\n", tongTien);

    return 0;
}
