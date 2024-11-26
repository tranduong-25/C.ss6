#include <stdio.h>

int main() {
    int nam, thang, soNgay;

    printf("Nhap nam: ");
    scanf("%d", &nam);

    printf("Nhap thang: ");
    scanf("%d", &thang);

    if (thang < 1 || thang > 12) {
        printf("Thang ko hop le! Vui long nhap lai.\n");
    } else {
        if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
            soNgay = 31;
        } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
            soNgay = 30;
        } else { 
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
                soNgay = 29; 
            } else {
                soNgay = 28;
            }
        }

        printf("Thang %d nam %d co %d ngay.\n", thang, nam, soNgay);
    }

    return 0;
}
