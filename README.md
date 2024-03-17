# 2308107010038_Tugas1_Pemrograman

Tugas 1 Pemrograman : 1. Program C konversi bilangan

#include <stdio.h>

int main (){
    int pilihan, angka, desimal, biner, octal, a, i,j;

    printf ("Opsi : \n");
    printf ("1. Mengubah bilangan Desimal ke Biner\n");
    printf ("2. Mengubah bilangan Biner ke Desimal\n");
    printf ("3. Mengubah bilangan Desimal ke Octal\n");
    printf ("4. Mengubah bilangan Octal ke Desimal\n");
    printf ("Masukkan Pilihan Anda: ");
    scanf ("%d", &pilihan);

    switch (pilihan){
        case 1:
        printf ("Masukkan Angka Desimal : ");
        scanf("%d", &angka);
        printf ("Bentuk Biner :");
        if (angka == 0)
            printf ("0");
            else {
                a = 1;
                biner = 0;
                while (angka > 0){
                    biner += (angka % 2) * a ;
                    angka /= 2;
                    a *=10;
                }
                printf ("%d", biner);
            }
            printf("\n");
            break;

        case 2:
        printf ("Masukkan Angka Biner : ");
        scanf ("%d", &angka);
        printf ("Bentuk Desimal : ");
        int desimal = 0, a = 1;
        while (angka>0) {
            desimal +=(angka % 10) * a;
            angka /= 10;
            a *= 2;
        }
        printf ("%d\n", desimal);
        break;

        case 3:
        printf ("Masukkan Angka Desimal : ");
        scanf("%d", &angka);
        printf ("Bentuk Octal :");
        if (angka == 0)
            printf ("0");
            else {
                a = 1, octal = 0;
                while (angka > 0){
                    octal += (angka % 8) * a ;
                    angka /= 8;
                    a *=10;
                }
                printf ("%d", octal);
            }
            printf ("\n");
            break;

        case 4:
        printf ("Masukkan Angka Octal : ");
        scanf ("%d", &angka);
        printf ("Bentuk Desimal :");
        desimal = 0, a = 1;
        while (angka > 0){
            desimal += (angka % 10)* a;
            angka /= 10;
            a *= 8;
        }
        printf("%d\n", desimal);
        break;
    default:
      printf("Opsi yang Anda masukkan tidak tepat\n");
      printf("Silahkan coba lagi!\n");
    
    }
    return 0;
}

Program di atas akan mengkonversi bilangan desimal, biner, dan octal. Program ini meminta input bilangan dari pengguna untuk menghasilkan output konversi bilangan desimal, biner, dan octal.

    printf ("Opsi : \n");
    printf ("1. Mengubah bilangan Desimal ke Biner\n");
    printf ("2. Mengubah bilangan Biner ke Desimal\n");
    printf ("3. Mengubah bilangan Desimal ke Octal\n");
    printf ("4. Mengubah bilangan Octal ke Desimal\n");
    printf ("Masukkan Pilihan Anda: ");
    scanf ("%d", &pilihan);

Bagian di atas mencetak opsi pilihan ke layar menggunakan printf(), kemudian program meminta pengguna untuk memasukkan pilihan mereka 
menggunakan scanf() dan menyimpannya dalam variabel 'pilihan'.

    switch (pilihan){
        case 1:
        printf ("Masukkan Angka Desimal : ");
        scanf("%d", &angka);
        printf ("Bentuk Biner :");
        if (angka == 0)
            printf ("0");
            else {
                a = 1;
                biner = 0;
                while (angka > 0){
                    biner += (angka % 2) * a ;
                    angka /= 2;
                    a *=10;
                }
                printf ("%d", biner);
            }
            printf("\n");
            break;

Jika pilihan pengguna adalah 1, program akan meminta pengguna untuk memasukkan angka desimal yang akan diubah ke biner. Program kemudian mengubah angka tersebut menggunakan proses konversi biner dan mencetak output ke layar. If memastikan angka yang dimasukkan pengguna adalah 0. Jika iya, akan mencetak 0 dan menjalankan langkah berikutnya. If-else menunjukkan bahwa jika angka bukan 0, langkah-langkah di dalam else akan dijalankan. While akan dijalankan jika nilai angka lebih besar dari 0.Modulo 2 akan menjadi digit biner, dan dikalikan dengan a. /= 2 mengurangi nilai angka menjadi setengahnya, a *=10 menggeser digit biner yang akan dibuat ke kiri diaklikan dengan 10. Jika break dijalankan, program akan keluar dari struktur switch-case.

        case 2:
        printf ("Masukkan Angka Biner : ");
        scanf ("%d", &angka);
        printf ("Bentuk Desimal : ");
        int desimal = 0, a = 1;
        while (angka > 0) {
            desimal += (angka % 10) * a;
            angka /= 10;
            a *= 2;
        }
        printf ("%d\n", desimal);
        break;

Jika pilihan pengguna adalah 2, program akan meminta pengguna untuk memasukkan angka biner yang akan diubah ke desimal. 
Program kemudian mengonversi bilangan biner menjadi desimal. Program kemudian menggunakan loop while untuk mengonversi bilangan 
biner menjadi desimal, desimal awal akan diatur ke 0. Loop berjalan selama angka lebih dari 0. Setiap iterasi dari loop, digit terakhir 
dari modulo 10 dikalikan dengan a kemudian hasilnya ditambahkan ke desimal.Kemudian, angka dibagi 10 untuk membuang digit terakhirnya. 
Nilai a diperbarui dengan mengalikan dengan 2. Setelah loop selesai, nilai desimal yang dihitung akan dicetak ke layar. Pernyataan break digunakan untuk keluar dari switch-case.

        case 3:
        printf ("Masukkan Angka Desimal : ");
        scanf("%d", &angka);
        printf ("Bentuk Octal :");
        if (angka == 0)
            printf ("0");
            else {
                a = 1, octal = 0;
                while (angka > 0){
                    octal += (angka % 8) * a ;
                    angka /= 8;
                    a *=10;
                }
                printf ("%d", octal);
            }
            printf ("\n");
            break;

Jika pilihan pengguna adalah 3, program akan meminta pengguna untuk memasukkan angka desimal yang akan diubah ke octal. 
Loop while akan mengonversi bilangan desimal menjadi oktal.Jika angka yang dimasukkan adalah 0, program langsung mencetak "0".
Jika tidak, program akan memulai proses konversi. Variabel octal awalnya diatur ke 0 dan a diatur ke 1. Loop akan berjalan selama 
angka lebih dari 0. Tiap iterasi digit terakhir dari angkahasil modulo 8 dikalikan dengan a dan hasilnya ditambah ke octal.
Selanjutnya, angka dibagi 8 untuk membuang digit terakhirnya.Nilai a diperbarui dengan mengalikannya dengan 10. Jika loop selesai, nilai
octal yang dihitung akan dicetak ke layar. Break untuk keluar dari switch-case.

        case 4:
        printf ("Masukkan Angka Octal : ");
        scanf ("%d", &angka);
        printf ("Bentuk Desimal :");
        desimal = 0, a = 1;
        while (angka > 0){
            desimal += (angka % 10) * a;
            angka /= 10;
            a *= 8;
        }
        printf("%d\n", desimal);
        break;

Jika pilihan pengguna adalah 4, program akan meminta pengguna untuk memasukkan angka octal yang akan diubah ke desimal. Loop 
while mengubah bilangan oktal menjadi desimal. Variabel desimal diinisialisasi dengan 0 dan a diinisialisasi dengan 1.Loop akan 
berjalan selama angka (bilangan oktal) lebih dari 0.Tiap iterasi, digit akhir hasil modulo 10 dikali a dan hasilnya ditambahkan ke 
desimal. Angka dibagi 10 untuk membuang digit terakhirnya.Nilai a diperbarui dengan mengalikannya dengan 8. Jika loop selesai, nilai 
desimal dicetak ke layar. Break untuk keluar dari switch-case

    default:
      printf("Opsi yang Anda masukkan tidak tepat\n");
      printf("Silahkan coba lagi!\n");

Bagian ini menangani kasus di mana pengguna memasukkan pilihan yang 
tidak tepat.

Tugas 1 Pemrograman : 2. Program yang dapat mengecek apakah tahun yang 
diinput oleh user berupa tahun kabisat atau bukan.

    #include <stdio.h>

    int main() {
    int tahun;
    char c;

    printf("Masukkan tahun dengan format 4 digit angka : ");
    
    if (scanf("%4d%c", &tahun, &c) != 2 || c != '\n') {
        printf("Format tahun yang Anda masukkan tidak sesuai. Silahkan coba lagi dengan memasukkan hanya 4 digit angka.\n");
        return 1; 
    }

    if (tahun < 1000 || tahun > 9999) {
        printf("Format tahun yang Anda masukkan tidak sesuai. Silahkan coba lagi dengan menggunakan hanya 4 digit angka.\n");
        return 1; 
    }

    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        printf("Tahun %d adalah tahun kabisat.\n", tahun);
    } else {
        printf("Tahun %d bukan tahun kabisat.\n", tahun);
    }

    return 0;
}

Program di atas memastikan bahwa input pengguna sesuai dengan format yang 
diharapkan dan memberikan output yang sesuai berdasarkan apakah tahun yang 
dimasukkan adalah tahun kabisat atau tidak. 

    if (scanf("%4d%c", &tahun, &c) != 2 || c != '\n') {
        printf("Format tahun yang Anda masukkan tidak sesuai.        Silahkan coba lagi dengan memasukkan hanya 4 digit angka.\n");
        return 1; 
        }

scanf dengan format string "%4d%c" digunaka agar program membaca input pengguna. %4d mengharuskan input untuk terdiri dari tepat 
4 digit angka, sedangkan %c membaca karakter newline. != 2 || c != '\n' adalah bagian dari kondisi if. Jika scanf mengembalikan 
nilai yang tidak sama dengan 2 atau karakter tambahan tidak merupakan newline maka kondisi ini akan bernilai true. Jika kondisi 
terpenuhi, program mencetak pesan kesalahan yang menunjukkan bahwa format tahun yang dimasukkan tidak sesuai dan mengembalikan 
kode kesalahan (1), yang menandakan bahwa program telah berakhir karena terjadi kesalahan. Ini akan menghentikan program agar 
tidak melanjutkan eksekusi dan memberi tahu pengguna tentang kesalahan yang terjadi dalam format inputan mereka.

     if (tahun < 1000 || tahun > 9999) {
        printf("Format tahun yang Anda masukkan tidak sesuai. Silahkan coba lagi dengan menggunakan hanya 4 digit angka.\n");
        return 1; 
    }

Kode diatas memastikan inputan angka tidak kurang dari 4 angka dan tidak lebih dari 4 angka.tahun < 1000 || tahun > 9999 adalah 
kondisi yang memeriksa apakah nilai tahun kurang dari 1000 atau lebih besar dari 9999. Jika kondisi tersebut terpenuhi maka program
akan mencetak pesan kesalahan yang menunjukkan bahwa format tahun yang dimasukkan tidak sesuai dan mengembalikan kode kesalahan (1),
yang menandakan bahwa program telah berakhir karena terjadi kesalahan dan akan menghentikan program agar tidak melanjutkan eksekusi 
dan memberi tahu pengguna tentang kesalahan yang terjadi dalam format input mereka.

     if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        printf("Tahun %d adalah tahun kabisat.\n", tahun);
    } else {
        printf("Tahun %d bukan tahun kabisat.\n", tahun);
    }

Kode di atas memastikan apakah tahun inputan pengguna merupakan tahun kabisat atau bukan. (tahun % 4 == 0 && tahun % 100 != 0) akan memeriksa 
apakah tahun yang dimasukkan bisa dibagi habis oleh 4 tetapi tidak bisa dibagi habis oleh 100. Ini adalah syarat untuk tahun kabisat kecuali 
tahun-tahun yang habis dibagi oleh 100 tetapi tidak habis dibagi oleh 400. (tahun % 400 == 0) akan memeriksa apakah tahun yang dimasukkan bisa 
dibagi habis oleh 400 sebagai syarat tambahan untuk tahun kabisat. Jika salah satu dari kedua kondisi tersebut terpenuhi, program akan mencetak 
pesan yang menyatakan bahwa tahun tersebut adalah tahun kabisat. Jika kedua kondisi tidak terpenuhi, artinya tahun yang dimasukkan bukan tahun 
kabisat, maka program akan mencetak pesan yang menyatakan bahwa tahun tersebut bukan tahun kabisat.
