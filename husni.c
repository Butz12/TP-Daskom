#include <stdio.h>

void main(){
    int i,n;
    char name[30], kelas[30], jurusan[30], nis[30];
    printf("==input==\n");
    printf("masukan banyak siswa yang ingin diinput : ");
    scanf("%d",&n);
    fflush(stdin);

    for (i=1 ; i<=n ; ++i) {
        printf("Data %d\n",i);
        printf("Nama : "); gets(name);
        printf("Kelas : "); gets(kelas);
        printf("Jurusan : "); gets(jurusan);
        printf("NIS : "); gets(nis);
        
    }
}