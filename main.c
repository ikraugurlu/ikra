#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("*      ********     *");
    printf("\n");
    printf("  *      MENU    *");
    printf("\n");
    printf("*      ********     *\n");

    printf("\n1-toplama islemi\n");
    printf("2-cikarma islemi\n");
    printf("3-carpma islemi\n");
    printf("4-kare alma islemi\n");
    printf("5-denklem alma (5x^2+4x+3)\n");
    printf("\n  *      ****     *  ");
    printf("\n*      ********     *\n");

    int sayi1, sayi2, secim, sonuc;
    printf("\n\nisleminiz: ");
    scanf("%d",&secim);

    switch(secim)
    {
    case 1:
        printf("iki sayi giriniz: ");
        scanf("%d %d",&sayi1,&sayi2);
        sonuc=sayi1+sayi2;
        printf("toplam: %d",sonuc);
        break;

    case 2:
    {
        printf("iki sayi giriniz: ");
        scanf("%d %d", &sayi1, &sayi2);
        sonuc=sayi1-sayi2;
        printf("sonuc: %d",sonuc);
        break;
    }
    case 3:
    {
        printf("iki sayi giriniz: ");
        scanf("%d%d",&sayi1, &sayi2);
        sonuc=sayi1*sayi2;
        printf("sonuc: %d",sonuc);
        break;
    }
    case 4:
    {
        printf("bir sayi giriniz: ");
        scanf("%d",&sayi1);
        sonuc=sayi1*sayi1;
        printf("sonuc: %d",sonuc);
        break;
    }
    case 5:
    {
        printf("X degerini giriniz: ");
        scanf("%d", &sayi1);
        sonuc=5*sayi1*sayi1+4*sayi1+3;
        printf("sonuc: %d", sonuc);
        break;
    }

    return 0;
    }
}
