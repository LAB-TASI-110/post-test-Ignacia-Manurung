// Ignacia Putri Manurung - 12S25034

#include <stdio.h>
#include <string.h>

int main() {

    char nama[100];
    char nim[20];
    char prodi[50];
    char hari[20];
    char waktu[10];
    char piket[10];
    char tempat[50];

    char jadwal_makan[100];
    char jadwal_piket[100];
    char sistem_pengambilan[50];

    printf("=== SISTEM OPERASIONAL KAFETARIA IT DEL ===\n\n");

    printf("Masukkan Nama: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Masukkan NIM: ");
    fgets(nim, sizeof(nim), stdin);

    printf("Masukkan Program Studi: ");
    fgets(prodi, sizeof(prodi), stdin);

    printf("Masukkan Hari (Senin/Jumat/Sabtu): ");
    fgets(hari, sizeof(hari), stdin);

    printf("Kategori Waktu Makan (pagi/siang/malam): ");
    fgets(waktu, sizeof(waktu), stdin);

    printf("Apakah jadwal piket makan hari ini? (Ya/Tidak): ");
    fgets(piket, sizeof(piket), stdin);

    printf("Tempat duduk makan: ");
    printf("\nPilihan:\n");
    printf("1. Kantin 1 lantai 1\n");
    printf("2. Kantin 1 lantai 2\n");
    printf("3. Kantin 2 lantai 1\n");
    printf("4. Kantin 2 lantai 2\n");
    printf("5. Kantin tengah bawah\n");
    printf("6. Kantin tengah atas\n");
    fgets(tempat, sizeof(tempat), stdin);


    /* menentukan jadwal makan */

    if(strstr(waktu,"pagi")!=NULL){
        strcpy(jadwal_makan,"07.00 - 07.15");
        strcpy(jadwal_piket,"06.45 - 07.00");
    }
    else if(strstr(waktu,"siang")!=NULL){
        strcpy(jadwal_makan,"12.15 - 12.30");
        strcpy(jadwal_piket,"12.00 - 12.15");
    }
    else if(strstr(waktu,"malam")!=NULL){
        strcpy(jadwal_makan,"07.00 - 07.15");
        strcpy(jadwal_piket,"06.45 - 07.00");
    }


    /* sistem pengambilan makanan */

    if(strstr(hari,"Jumat")!=NULL && strstr(waktu,"malam")!=NULL){
        strcpy(sistem_pengambilan,"Prasmanan (Self Service)");
        strcpy(jadwal_makan,"07.00 - 08.30");
    }
    else if(strstr(hari,"Sabtu")!=NULL){
        strcpy(sistem_pengambilan,"Prasmanan (Self Service)");

        if(strstr(waktu,"pagi")!=NULL){
            strcpy(jadwal_makan,"07.00 - 09.00");
        }
        else if(strstr(waktu,"siang")!=NULL){
            strcpy(jadwal_makan,"12.00 - 14.00");
        }
    }
    else{
        strcpy(sistem_pengambilan,"Piket Makan");
    }


    printf("\n=== DATA MAHASISWA ===\n");

    printf("%s", nama);
    printf("%s", nim);
    printf("%s", prodi);

    printf("Hari: %s", hari);
    printf("Waktu makan: %s", waktu);

    printf("\n=== INFORMASI KAFETARIA ===\n");

    printf("Jadwal Piket : %s\n", jadwal_piket);
    printf("Jadwal Makan : %s\n", jadwal_makan);
    printf("Sistem Pengambilan : %s\n", sistem_pengambilan);

    printf("\nStatus Piket Hari Ini : %s", piket);

    printf("\nTempat Duduk : %s", tempat);

    printf("\n=== SELAMAT MAKAN ===\n");

    return 0;
}