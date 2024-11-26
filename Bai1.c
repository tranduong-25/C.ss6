#include <stdio.h>

int main() {
    int i = 0, so, tongLe = 0;

    while (i < 5) {
        printf("Nhap so nguyen thu %d: ", i + 1);
        scanf("%d", &so);

        if (so % 2 != 0) {
            tongLe += so;
        }

        i++; 
    }

    printf("Tong cac so le trong 5 so da nhap la: %d\n", tongLe);

    return 0;
}
