#include <stdio.h>
#include <string.h>

int main() {
    char matKhauDung[] = "12345"; 
    char matKhauNhap[50];        

    printf("Nhap mat khau: ");
    scanf("%s", matKhauNhap);

    if (strcmp(matKhauNhap, matKhauDung) == 0) {
        printf("Mat khau dung roi day!\n");
    } else {
        printf("Sai roi! Lewlew!\n");
    }

    return 0;
}
