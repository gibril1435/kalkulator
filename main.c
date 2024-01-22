#include <stdio.h>
#include "pertambahan.h"
#include "pengurangan.h"

int main() {
    int angka1, angka2;
    char operator;

    // Meminta input dari pengguna
    printf("Masukkan dua angka: ");
    scanf("%d %d", &angka1, &angka2);

    printf("Pilih operator (+ atau -): ");
    scanf(" %c", &operator);

    // Menentukan operasi berdasarkan operator
    if (operator == '+') {
        printf("Hasil pertambahan: %d\n", tambah(angka1, angka2));
    } else if (operator == '-') {
        printf("Hasil pengurangan: %d\n", kurang(angka1, angka2));
    } else {
        printf("Operator tidak valid\n");
    }

    return 0;
}
