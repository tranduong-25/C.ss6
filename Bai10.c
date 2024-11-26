#include <stdio.h>

int main() {
    int so, i, laNguyenTo = 1; 
    printf("Nhap vao 1 so nguyen bat ky: ");
    scanf("%d", &so);

    if (so <= 1) {
        laNguyenTo = 0; 
    } else {
        for (i = 2; i <= so / 2; i++) { 
            if (so % i == 0) {
                laNguyenTo = 0;
                break; 
            }
        }
    }

    if (laNguyenTo) {
        printf("%d la so nguyen to.\n", so);
    } else {
        printf("%d khong phai so nguyen to.\n", so);
    }

    return 0;
}
