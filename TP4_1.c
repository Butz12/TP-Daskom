#include <stdio.h>

void main(){
    int i,n;
    char nama[30], kelas[30], jurusan[30], nis[30];
    printf("==input==\n");
    printf("masukan banyak siswa yang ingin diinput : ");
    scanf("%d",&n);
    i=1;
    
for (i=1; i<=n; i++) {
        printf("===masukan data===");
        printf("Nama :"); 
        fgets(nama,30,stdin);
        printf("Kelas : "); 
        fgets(kelas,30,stdin);
        printf("Jurusan : "); 
        fgets(jurusan,30,stdin);
        printf("NIS :"); 
        fgets(nis,30,stdin);
        
    }
}