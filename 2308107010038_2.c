#include <stdio.h>

int main() {
    int tahun;
    char c;

    // Meminta user untuk menginput tahun
    printf("Masukkan tahun dengan format 4 digit angka : ");
    
    // Mengekspresikan input dari user
    if (scanf("%4d%c", &tahun, &c) != 2 || c != '\n') {
        printf("Format tahun yang Anda masukkan tidak sesuai. Silahkan coba lagi dengan memasukkan hanya 4 digit angka.\n");
        return 1; 
        // Keluar dari program dengan kode kesalahan
    }

    // Memastikan inputan angka tidak kurang dari 4 angka dan tidak lebih dari 4 angka
    if (tahun < 1000 || tahun > 9999) {
        printf("Format tahun yang Anda masukkan tidak sesuai. Silahkan coba lagi dengan menggunakan hanya 4 digit angka.\n");
        return 1; 
        // Keluar dari program dengan kode kesalahan
    }

    // Memastikan apakah tahun inputan user merupakan tahun kabisat atau bukan
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        printf("Tahun %d adalah tahun kabisat.\n", tahun);
    } else {
        printf("Tahun %d bukan tahun kabisat.\n", tahun);
    }

    return 0;
}