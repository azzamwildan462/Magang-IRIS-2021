#include <cstdio>

void translasi(int *x, int *y, int a, int b)
{
    *x = *x + a;
    *y = *y + b;
}

int main()
{
    int x = 5, y = 12, a = 3, b = 4; //x,y adalah koordinat asal dan a,b adalah arah translasi
    printf("Koordinat sebelum translasi = (%d,%d)\n", x, y);
    translasi(&x, &y, a, b);
    printf("Koordinat setelah translasi = (%d,%d)\n", x, y);
    return 0;
}