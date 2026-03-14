// Ignacia Putri Manurung - 12S25034

#include <stdio.h>
#include <string.h>

int main() {
    char kode[10];

    // daftar kota
    char kodeKota[4][5] = {"MDN","BLG","JKT","SBY"};
    char namaKota[4][20] = {"Medan","Balige","Jakarta","Surabaya"};
    int ongkir[4] = {8000,5000,12000,13000};
    char keterangan[4][20] = {"Dalam Pulau","Dalam Pulau","Luar Pulau","Luar Pulau"};

    float beratButet, beratUcok, totalBerat;
    float totalOngkir;
    int i, ditemukan;

    printf("Masukkan kode kota dan berat paket Butet\n");
    printf("(ketik END untuk selesai)\n\n");

    while (1) {

        printf("Kode Kota : ");
        scanf("%s", kode);

        if(strcmp(kode,"END") == 0) {
            break;
        }

        printf("Berat paket Butet (kg): ");
        scanf("%f", &beratButet);

        ditemukan = 0;

        for(i=0;i<4;i++) {
            if(strcmp(kode,kodeKota[i]) == 0) {

                ditemukan = 1;

                beratUcok = 1.5 * beratButet;
                totalBerat = beratButet + beratUcok;

                totalOngkir = totalBerat * ongkir[i];

                printf("\nKota Tujuan            : %s\n", namaKota[i]);
                printf("Berat paket Butet      : %.2f kg\n", beratButet);
                printf("Berat paket Ucok       : %.2f kg\n", beratUcok);
                printf("Total berat            : %.2f kg\n", totalBerat);

                if(totalBerat > 10) {
                    totalOngkir = totalOngkir * 0.9;
                }

                printf("Total ongkos kirim     : Rp %.0f\n", totalOngkir);

                printf("Informasi Promo        : ");

                if(totalBerat > 10 && strcmp(keterangan[i],"Luar Pulau")==0) {
                    printf("Diskon ongkir 10%% dan Asuransi gratis\n");
                }
                else if(totalBerat > 10) {
                    printf("Diskon ongkir 10%%\n");
                }
                else if(strcmp(keterangan[i],"Luar Pulau")==0) {
                    printf("Asuransi gratis\n");
                }
                else {
                    printf("Tidak ada promo\n");
                }

                printf("\n---------------------------------\n\n");
            }
        }

        if(!ditemukan) {
            printf("Kode kota tidak ditemukan\n\n");
        }
    }

    printf("Program selesai.\n");

    return 0;
}