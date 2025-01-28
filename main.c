#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int i = 0;
struct info {
    char fname[50];
    char lname[50];
    int roll;
    float cgpa;
    int cid[10];
}st[55];
void ogrenciekle() {
    int j;
printf("Ogrenci bilgilerini ekle\n");
    printf("--------------------------\n");
    printf("Ogrencinin adı:");
scanf("%s",st[i].fname);
    printf("Ogrencinin soyadı:");
    scanf("%s",st[i].lname);
    printf("Okul numarasi giriniz:");
    scanf("%d",&st[i].roll);
    printf("CGPA giriniz:");
    scanf("%f",&st[i].cgpa);
    printf("Kurs ID giriniz:");
    for (j=0;j<5;j++) {
        scanf("%d",&st[i].cid[j]);
    }
    i=i+1;
}

void bulnumara()
{
    int x;
    printf("Kayit numarasi giriniz");
    scanf("%d",&x);
    for (int j=1; j<=i; j++) {
        if (x==st[j].roll){
            printf("Ogrenci bulunmustur...");
            printf("Ogrencinin ismi : %s\n",st[i].fname);
            printf("Ogrencinin soyadi: %s\n",st[i].lname);
            printf("CGPA:%f\n",st[i].cgpa);
        }
        for (j=0; j<5; j++) {
            printf("Kurs ID :%d\n",st[i].cid);
        }
        break;
    }
}
void adbul() {
char a[50];
    printf("Ogrencinin adi:");
    scanf("%s",a);
    int c=0;
    for (int j=1; j<=i; j++ ) {
        if (!strcmp(st[j].fname,a)) {
            printf("\n==Ogrenci detaylari==\n");
            printf("Ogrenci adi %s\n",st[i].fname);
            printf("Ogrenci soyadi%s\n",st[i].lname);
            printf("Ogrenci num %f\n",st[i].roll);
            printf("CGPA:%f\n",st[i].cgpa);
            printf("Ogrencinin ders kodlarini bir bir giriniz:");
            for (j=0;j<5;j++) {
                printf("Kurs ID :%d\n",st[i].cid[j]);
            }
            c=1;
        }
        else {
            printf("Isim bulunamadi..");
        }
    }
}

void bulc() {
    int id;
    printf("Lutfen kurs ID giriniz:");
    scanf("%d",&id);
    int c=0;
    for (int j=1; j<=i; j++ ) {
        for (int d=0; d<5; d++) {
            if (id==st[j].cid[d]){
                printf("\n====Ogrenci detaylari====\n");
                printf("Ogrenci adi %s\n",st[i].fname);
                printf("Ogrenci soyadi%s\n",st[i].lname);
                printf("Ogrenci num %f\n",st[i].roll);
                printf("CGPA:%f\n",st[i].cgpa);
                c=1;
                break;
            }
            else
                printf(
                    "Isim bulunamadi..\n");
        }
    }
}

void totalsayi() {
    printf("Total ogrenci mevcutu %d\n",i);
    printf("Maximum 50 ogrenci olmalidir.");
    printf("%d kadar daha ogrenci alinabilir.",50-i);
}

void ogrencisil() {
    int a;
    printf("Silmek istediginiz ogrencinin kayit numarasini giriniz:");
    scanf("%d",&a);
    for (int j=1; j<=i; j++) {
        if (a==st[j].roll) {
                for (int k=j; k<49; k++) {
                    st[k]=st[k+1];
                    i--;
                }
        }
        printf("Kayit numarasi basariyla silinmistir.");
    }
}
void yenilenum(){
    printf("Yenilemek istediginiz kayit numarasini giriniz:");
    long int x;
    scanf("%ld",&x);
    for (int j=0; j<i; j++) {
        if (st[j].roll==x) {
            printf("1.AD\n2.SOYAD\n3.ROLL NO\n4.CGPA\n5.DERS");
            int z;
            scanf("%d",&z);
            switch (z) {
                case 1:
                    printf("Yeni ismi giriniz: ");
                scanf("%s",&st[j].fname);
                break;
                case 2:
                    printf("Yeni soyadi giriniz: ");
                scanf("%s",&st[j].lname);
                break;
                case 3:
                    printf("Yeni kayit numarasini giriniz:");
                scanf("%d",&st[j].roll);
                break;
                case 4:
                    printf("Yeni cgpa numarasi giriniz:");
                scanf("%d",&st[j].cgpa);
                break;
                case 5:
                    printf("Yeni ders kodlarini giriniz:");
                for (int k=0; k<5; k++) {
                    scanf("%d ",st[k].cid);
                }
                break;

            }
            printf("YENILEME ISLEMI BASARIYLA TAMAMLANDI.");
        }
    }
}
void main(){
        int secim,count;
        while (i==1){
            printf("\n====PROGRAM GIRIS====\n");
            printf("1.Ogrenci eklemek icin\n");
            printf("2.Kayit numarasi ile ogrenci detaylari\n");
            printf("3.Ogrenci ismiyle ogrenci detaylari\n");
            printf("4.Ders ID ile ogrenci detayları\n");
            printf("5.Toplam ogrenci sayisi\n");
            printf("6.Kayit numarasi ile ogrenci numarasi silmek\n");
            printf("7.Kayit numarasi ile ogrenci bilgisi guncellemek");
            printf("8.Cikis");
            printf("Lutfen seciminizi yaziniz:");
            scanf("%d",&secim);
            switch (secim) {
                case 1:
                    ogrenciekle();
                break;
                case 2:
                    bulnumara();
                break;
                case 3:
                    adbul();
                break;
                case 4:
                    bulc();
                break;
                case 5:
                    totalsayi();
                break;
                case 6:
                    ogrencisil();
                break;
                case 7:
                    yenilenum();
                break;
                case 8:
                    exit(0);
                break;
            }
        }
    }