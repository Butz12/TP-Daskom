#include <stdio.h>
#include <string.h>

int main(){

    int memilih;
    float bmi_lakilaki, tinggi_lakilaki, berat_lakilaki, bmi_perempuan, tinggi_perempuan, berat_perempuan;
    char nama_lakilaki[100], nama_perempuan[100];

    printf("=====SELAMAT DATANG DI KALKULATOR BODY MASS INDEX=====\n");
    printf("Pilih Jenis Kelamin Anda!\n 1) Laki-laki\n 2) Perempuan\n");
    printf("Pilihan\t: "); scanf("%d", &memilih);
    
    switch(memilih){
        case 1:
        printf("Masukkan Nama Anda\t: "); scanf("%s", nama_lakilaki);
        printf("Masukkan Tinggi Badan\t: "); scanf("%f", &tinggi_lakilaki);
        printf("Masukkan Berat Badan\t: "); scanf("%f", &berat_lakilaki);

        bmi_lakilaki=berat_lakilaki/((tinggi_lakilaki/100)*(tinggi_lakilaki/100));

        printf("Nilai Body Mass Index %s: %f\n", nama_lakilaki, bmi_lakilaki);

        if(17<=bmi_lakilaki<=23){
            printf("Selamat, Berat Badan %s Ideal.\n", nama_lakilaki);
        }else{
            printf("Maaf, Berat Badan %s Kurang Ideal.\n", nama_lakilaki);
        }
        break;

        case 2:
        printf("Masukkan Nama Anda\t: "); scanf("%s", nama_perempuan);
        printf("Masukkan Tinggi Badan\t: "); scanf("%f", &tinggi_perempuan);
        printf("Masukkan Berat Badan\t: "); scanf("%f", &berat_perempuan);
    
        bmi_perempuan=berat_perempuan/((tinggi_perempuan/100)*(tinggi_perempuan/100));

        printf("Nilai Body Mass Index %s: %f\n", nama_perempuan, bmi_perempuan);

        if(18<=bmi_perempuan<=25){
            printf("Selamat, Berat Badan %s Ideal.\n", nama_perempuan);
        }else{
            printf("Maaf, Berat Badan %s Kurang Ideal.\n", nama_perempuan);
        }
        break;
    }
}