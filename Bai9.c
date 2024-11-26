#include <stdio.h>

int main() {
    int so, tram, chuc, donVi, tong;

    printf("Cac so Amstrong co 3 chu so la:\n");

    for (so = 100; so <= 999; so++) {
        tram = so / 100;       
        chuc = (so / 10) % 10;  
        donVi = so % 10;        

        tong = tram * tram * tram +
               chuc * chuc * chuc +
               donVi * donVi * donVi;

        if (tong == so) {
            printf("%d\n", so);
        }
    }

    return 0;
}
