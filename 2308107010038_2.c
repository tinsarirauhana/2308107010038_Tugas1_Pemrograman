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
