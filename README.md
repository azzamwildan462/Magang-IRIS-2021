# Magang IRIS 2021

Ini adalah sebuah Repository yang berisi tentang Magang IRIS 2021.

## 13 April 2021

Pada pertemuan ke-3 Magang IRIS 2021, diberikan sebuah materi yaitu
Pointer dan Git.

### Pointer

Pengertian Pointer sendiri sebenarnya saya kurang tau, Tapi menurut saya Pointer adalah permainan nilai dengan alamat. Jadi maksudnya adalah kita bisa
mengganti nilai sebuah variabel dengan alamat sekian dengan hanya diketahui alamatnya saja. Langsung saja contoh:

```
int rumah = 89;
int *alamat_rumah = &rumah;
printf("Alamat = %p\nIsi = %d", alamat_rumah, *alamat_rumah);
return 0;
```

Dapat dilihat alamat rumah dan rumahnya kan? Oh iya jadi \* disana itu merujuk ke isi alamat. dan '&' disana merujuk ke alamat dari isi. Untuk lebih jelasnya silahkan Run code dibawah ini:

```
int rumah = 89;
    int *ptr = &rumah;
    printf("Alamat rumah = %p\nIsi = %d\n", &rumah, rumah);
    printf("Alamat rumah = %p\nIsi = %d\n", &rumah, *&rumah);
    printf("Alamat ptr = %p\nIsi = %d\n", &*ptr, *ptr);
    printf("Alamat ptr = %p\nIsi = %p\n", &ptr, ptr);
    return 0;
```

Itu adalah contoh contoh penggunaan \* dan '&' semoga dapat dipahami. Agar lebih baik, pahami dengan Hati saja :)\
Setelah itu, kita akan bermain array dengan pointer. Jadi sebenernya array ini menyimpan alamat dan alamatnya itu merujuk kepada alamat array indeks ke-0. Dapat di-Run code dibawah ini:

```
int arr[4] = {12, 23, 34, 45};

    //Biasa (Alamat dengan Pointer)
    for (int i = 0; i < 4; i++)
    {
        printf("Alamat = %p\nIsi = %d\n", &arr[i], arr[i]);
    }

    //Dengan Pointer
    for (int i = 0; i < 4; i++)
    {
        printf("Alamat: %p\nIsi: %d\n", (arr + i), *(arr + i));
    }

    //Tes alamat sama atau tidak:
    for (int i = 0; i < 4; i++)
    {
        printf("Pada indeks %d:\nAlamat mode 1: %p\nAlamat mode 2: %p\n", i, &arr[i], (arr + i));
    }

    return 0;
```

Itu adalah contoh array dengan pointer.\
Nah Efek kegunaan Pointer tidak akan terasa kalau hanya dalam satu scope fungsi saja. Untuk melakukan perhitungan dengan fungsi biasanya hanya me-return 1 variabel saja (Contoh: hitungluas()-> return hasil_luas). Nah dengan Pointer bisa return 2 sampai tak hingga variabel (Contoh: tukar()-> return angka1,angka2). Conroh menggunakan Pointer untuk membuat fungsi:

```
#include <cstdio>
void tukar(int *angka1, int *angka2)
{
    *angka1 = *angka1 ^ *angka2;
    *angka2 = *angka1 ^ *angka2;
    *angka1 = *angka1 ^ *angka2;
}
int main()
{
    int a = 89, b = 13;
    printf("Sebelum ditukar:\na = %d, b = %d\n", a, b);
    tukar(&a, &b);
    printf("Setelah ditukar:\na = %d, b = %d\n", a, b);

    return 0;
}
```

Nah bagaimana cara kerjanya itu? Pertama program main() mengirim dua buah alamat yaitu alamat si a dan alamat si b. Nah lalu alamat tersebut ditangkap oleh variabel *angka1 dan *angka2. Setelah itu diolah supaya isinya tertukar (Teknik mengolahnya ini terserah). Atau jika bingung bisa gunakan code berikut:

```
int temp = *angka1;
*angka1 = *angka2;
*angka2 = temp;

```

Itulah Pointer dan bagaimana penerapannya dalam pemrograman. Untuk lebih jelasnya saya mencoba membuat sebuah mini-project berbasis Pointer yang dapat diakses pada Folder '13 April 2021'. Selanjutnya adalah membahas tentang Git.

### Git
