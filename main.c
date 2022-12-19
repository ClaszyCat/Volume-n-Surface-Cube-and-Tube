#include <stdio.h>

//Fungsi rumus kubus
int luaspermukaankubus(int s){
    int luaskubus;
    luaskubus = 6*s*s;
    return luaskubus;
}

//Fungsi rumus kubus
int volumekubus(int s){
    int volumekubus;
    volumekubus = s*s*s;
    return volumekubus;
}

//Fungsi rumus tabung
float luaspermukaantabung(float r, float t){
    float luaspermukaantabung = 2*3.14*r*(r*t);
    return luaspermukaantabung;
}

//Fungsi rumus tabung
float volumetabung(float r,float t){
    float volumetabung =3.14*r*r*t;
    return volumetabung;
}

int main(){
    int menu, pilihan;
    float sisi, volume, LuasPermukaan, panjang, lebar, tinggi, tinggiTabung, rusuk;

    kembali:
       printf("==============================================\n");
       printf("Aplikasi penghitung Volume dan Luas Permukaan\n");
       printf("dari Kubus dan Tabung\n");
       printf("===========================\n");
       printf("Silakan memilih bangun ruang mana yang ingin dihitung dahulu :\n");
       printf("============\n");
       printf("1.Kubus\n");
       printf("2.Tabung\n");
       printf("============\n");
       printf("Pilihan anda nomor =");
       scanf("%d", &menu);

       if(menu == 1){
             int s,luas,volume;
             printf("\nMasukan nilai kubus (cm)=");
             scanf("%d", &s);

             volume = volumekubus (s);
             printf("\nRumus volume kubus = sisi x sisi x sisi\n");
             printf ("volume kubus adalah: %d cm3 (centimeter kubik)\n", volume);

             luas = luaspermukaankubus (s);
             printf("Rumus luas permukaan kubus = 6 x (sisi x sisi)\n");
             printf ("luas permukaan adalah: %d cm2 (centimeter persegi)\n\n", luas);
       }else if(menu ==2){
             float r,t;
             printf ("\nMasukan nilai jari-jari (cm)= ");
             scanf ("%f", &r);
             printf ("masukan nilai tinggi (cm)= ");
             scanf ("%f", &t);

             printf("\nRumus volume Tabung = 3,14 x jari x jari x tinggi tabung \n");
             printf("Volume tabung adalah: %.f cm3 (centimeter kubik)\n", volumetabung (r,t));

             printf("Rumus luas permukaan Tabung = 2 x (3,14 x jari x jari) + (2 x 3,14 x jari x tinggi tabung)\n");
             printf ("luas permukaan adalah: %.f cm2 (centimeter persegi)\n\n", luaspermukaantabung(r,t));
       }

       printf("Tekan tombol 1 untuk kembali ke menu utama, tekan tombol 2 untuk keluar =");
        scanf("%d", &pilihan);
       switch(pilihan){
        case 1:
            goto kembali;
            break;
        case 2:
            goto keluar;
            break;
       }
    keluar:
        printf("\nProgram by Rafidhiya Bagus Farizki\n");
        printf("NIM 202110370311424\n");
        return 0;
}
