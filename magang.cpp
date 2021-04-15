#include <cstdio>
void tukar(int *angka1, int *angka2)
{
    *angka1 = *angka1 ^ *angka2;
    *angka2 = *angka1 ^ *angka2;
    *angka1 = *angka1 ^ *angka2;
}
void tukae2(int *angka1, int *angka2)
{
    int temp = *angka1;
    *angka1 = *angka2;
    *angka2 = temp;
}
int main()
{
    int a = 89, b = 13;
    printf("Sebelum ditukar:\na = %d, b = %d\n", a, b);
    tukae2(&a, &b);
    printf("Setelah ditukar:\na = %d, b = %d\n", a, b);

    return 0;
}