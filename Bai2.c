#include <stdio.h>

int main() {
    int i = 0, so, demChan = 0, demLe = 0;
    while (i < 5) {
        printf("Nhap so nguyen thu %d: ", i + 1);
        scanf("%d", &so);

        if (so % 2 == 0) {
            demChan++; 
        } else {
            demLe++;  
        }

        i++;
    }

    printf("So luong so chan: %d\n", demChan);
    printf("So luong so le: %d\n", demLe);

    return 0;
}
