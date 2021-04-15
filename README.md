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

Itulah Pointer dan bagaimana penerapannya dalam pemrograman. Untuk lebih jelasnya saya mencoba membuat sebuah implementasi Pointer pada dunia Pemrograman yang dapat diakses pada Folder '13 April 2021'. Selanjutnya adalah membahas tentang Git.

### Git

Sebenarnya saya juga kurang tahu apa itu Git Xd. Yang saya tahu tentang Git adalah dia merupakan sesuatu yang memudahkan kita untuk mengontrol versi dari Program yang telah kita buat. Penggunaan git agak kurang terasa jika programnya kecil dan hanya terdapat sedikit file. Namun jika program sudah besar dan banyak terdapat file-file didalamnya maka git akan terasa. Dengan menggunakan Git semisal kita mau meng-update Program kita lalu update an tersebut terkesan gagal maka dengan Git kita bisa kembali ke masa lalu Xd :v (Mengembalikan kodingan kita yang telah ter-modif untuk update).\
Langsung saja untuk Git ini ada 2 Sesi yaitu Persiapan dan Pelaksanaan. Sesi persiapan ini hanya kita lakukan sekali saja dan sesi Pelaksanaan kita bisa ulang banyak kali sesuka hati.

```
1. Instalasi Git
2. Hidupkan Git serta Persiapan Repo dan Remote Repo
3. Set branch (opsional (seinget saya defaultnya itu Master))
4. Pilih file
5. Commit
6. Push
```

1, 2 adalah persiapan dan sisanya adalah pelaksanaan (proses upload)\
Yoshh.. langsung saja praktek...\
Instalasi pada Ubuntu atau Keluarga Debian lainnya:

```
sudo apt install git
```

Instalasi pada Windows bisa di-download di [https://git-scm.com/] tinggal next next ikuti perintah.\
Setelah Instalasi berhasil melakukan Instalasi maka masuk ke tahap selanjutnya yaitu Persiapan Upload. Oh iya ada 2 cara untuk upload bisa pakai GUI (ada di Web) atau pake CLI. Dan sekarang akan membahas menggunakan CLI.\
Namun sebelum itu kita harus arahkan direktori cmd atau terminal kita ke folder proyek kita. Misal saya punya folder 'proyek' di D. Maka nanti tinggal cd ke D/proyek. Oh iya untuk Buka cmd di windows bisa `ctrl+r` lalu ketik 'cmd' lalu enter. Untuk Xubuntu bisa ke `Alt+F3` lalu cari 'Terminal lalu enter. Untuk distro linux lain bisa tekan saja logo distronya lalu cari 'terminal'\
Nah setelah selesai setting direktori, kita harus aktifkan Git:

```
git init
```

Setalah init berhasil maka akan terdapat folder bernama '.git' di dalam folder proyek anda. Lalu selanjutnya kita buat Repo di Github dan Remote dia.\
Untuk buat Repo, kita harus punya akun Github lalu klik new dan isinya disesuaikan saja lalu klik 'add new repository'. Setelah Repo terbuat, maka selanjutnya adalah me-remote repo tersebut yaitu dengan cara:

```
git remote add 'nama_remote' 'link repo'
Contoh:
git remote add remot https://github.com/azzamwildan462/Magang-IRIS-2021
```

Biasanya kalo masih pertama kali remote maka akan diberi perintah untuk isi username dan email. Ikuti saja perintahnya..\
Tahap persiapan telah selesai.. selanjutnya proses upload. Yang pertama kita lakukan adalah menentukan branch mana yang akan kita upload:

```
Tambah branch baru:
git branch 'nama branch'
git branch main
Pilih branch:
git checkout 'nama branch'
git checkout main
```

Lalu setelah itu, kita pilih file mana yang mau ditambahkan atau di-upload:

```
git add "namafile"
Contoh:
git add "README.md"
Untuk upload keseluruhan isi folder:
git add .
```

Setelah itu kita lakukan Commit:

```
git commit -m "nama commit"
Contoh:
git commit -m "update readme"
```

Oh iya sampai sini, seharusnya file yang tadi telah kita tambahkan ke repo lokal. Untuk menambahkannya ke repo github maka kita harus push dia:

```
git push 'nama remote' 'nama branch'
git push remot main
```

Seharusnya file-file yang kita pilih tadi sudah berada pada repo github kita.
Dan kalau masih ada error tinggal ikutin saja instruksi di Terminalnya. Kalo semisal di repo github sudah ada File jangan terburu-buru gunakan `git push -f 'nama remote' 'nama branch', Backup dulu filenya lalu gunakan Perintah itu Insyaallah WORKSS.. dan saya menulis readme ini 2x karena hal itu :v
