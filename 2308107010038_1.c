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

