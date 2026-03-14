// Ignacia Putri Manurung - 12S25034

#include <stdio.h>

int main() {
    int N;
    
    printf("Masukkan jumlah total data: ");
    scanf("%d", &N);

    int stok[N];
    char kategori[N][50];
    char cari[50];
    int total = 0;

    for(int i = 0; i < N; i++) {
        printf("\nData ke-%d\n", i + 1);
        printf("Masukkan jumlah stok (pcs): ");
        scanf("%d", &stok[i]);

        printf("Masukkan kode kategori barang: ");
        scanf(" %[^\n]", kategori[i]);
    }

    printf("\nMasukkan kategori barang yang ingin dijumlahkan: ");
    scanf(" %[^\n]", cari);

    for(int i = 0; i < N; i++) {
        int sama = 1;

        for(int j = 0; kategori[i][j] != '\0' || cari[j] != '\0'; j++) {
            if(kategori[i][j] != cari[j]) {
                sama = 0;
                break;
            }
        }

        if(sama == 1) {
            total += stok[i];
        }
    }

    printf("\nTotal stok untuk kategori \"%s\" adalah: %d pcs\n", cari, total);

    return 0;
}