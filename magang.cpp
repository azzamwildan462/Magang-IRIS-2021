#include <cstdio>
#include <iostream>
void tukar(int *angka1, int *angka2)
{
    *angka1 = *angka1 ^ *angka2;
    *angka2 = *angka1 ^ *angka2;
    *angka1 = *angka1 ^ *angka2;
}
int main()
{
    int arr[4] = {123, 234, 345, 456};

    for (int i = 0; i < 4; i++)
    {
        printf("i = %d\nAlamat = %p\nNilai = %d\n", i, (arr + i), *(arr + 1));
    }

    printf("tess");
    return 0;
}