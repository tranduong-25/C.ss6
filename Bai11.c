#include <stdio.h>

int main() {
    int n, so = 2, dem = 0; 
    printf("Nhap vao so nguyen n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap vao so nguyen duong.\n");
    } else {
        printf("%d so nguyen dau tien la:\n", n);

        while (dem < n) { 
            int i = 2, laNguyenTo = 1;

            while (i <= so / 2) { 
                if (so % i == 0) {
                    laNguyenTo = 0; 
                    break;
                }
                i++;
            }

            if (laNguyenTo) {
                printf("%d ", so);
                dem++;
            }

            so++; 
        }

        printf("\n");
    }

    return 0;
}
