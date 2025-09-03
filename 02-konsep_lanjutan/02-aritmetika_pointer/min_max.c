#include <stdio.h>

// Tulis prototipe fungsi Anda di sini
void cari_min_max(int *arr, int n, int *p_min, int *p_max);

int main(void) {
    int angka[] = {45, 12, 9, 77, 23, 34, 5};
    int ukuran = sizeof(angka) / sizeof(angka[0]);
    int nilai_terkecil, nilai_terbesar;

    // Panggil fungsi di sini
    cari_min_max(angka, ukuran, &nilai_terkecil, &nilai_terbesar);

    printf("Array: ");
    for (int i = 0; i < ukuran; i++) {
        printf("%d ", angka[i]);
    }
    printf("\n");
    
    printf("Nilai minimum: %d\n", nilai_terkecil);
    printf("Nilai maksimum: %d\n", nilai_terbesar);

    return 0;
}

// Tulis definisi fungsi cari_min_max Anda di sini
void cari_min_max(int *arr, int n, int *p_min, int *p_max) {
    // Tulis logika Anda di sini
    

}
