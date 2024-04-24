#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <windowsx.h>
#include <mmsystem.h>
#include <string.h>

void afisare_animatii_inceput(int nm)
{
    nm=0;
    char buff[40000];
    char linie[400];
    FILE *F;
    F= fopen("Pirat initial.txt","r");
    while(fgets(linie, 400, F)!= NULL)
    {
        strcat(buff, linie);
    }
    system("@cls||clear");

    puts(buff);
    memset(buff, 0, 40000);
    fclose(F);


    Sleep(1000);
    system("@cls || clear");

    FILE *G;
    G= fopen("Pirat2.txt","r");
    while(fgets(linie, 400, G)!= NULL)
    {
        strcat(buff, linie);
    }
    system("@cls||clear");
    puts(buff);
    memset(buff, 0, 40000);
    fclose(G);


    Sleep(1000);
    system("@cls || clear");

    FILE *H;
    H= fopen("Pirat3.txt","r");
    while(fgets(linie, 400, H)!= NULL)
    {
        strcat(buff, linie);
    }
    system("@cls||clear");
    puts(buff);
    memset(buff, 0, 40000);
    fclose(H);

    Sleep(1000);
    system("@cls || clear");

    FILE *I;
    I= fopen("Pirat4.txt","r");
    while(fgets(linie, 400, I)!= NULL)
    {
        strcat(buff, linie);
    }
    system("@cls||clear");
    puts(buff);
    memset(buff, 0, 40000);
    fclose(I);

    Sleep(1000);
    system("@cls || clear");

    FILE *J;
    J= fopen("Pirat5.txt","r");
    while(fgets(linie, 400, J)!= NULL)
    {
        strcat(buff, linie);
    }
    system("@cls||clear");
    puts(buff);
    memset(buff, 0, 40000);
    fclose(J);


    Sleep(1000);
    system("@cls || clear");

    FILE *K;
    K= fopen("Swords.txt","r");
    while(fgets(linie, 400, K)!= NULL)
    {
        strcat(buff, linie);
    }
    system("@cls||clear");
    puts(buff);
    memset(buff, 0, 40000);
    fclose(K);

    Sleep(1000);
    system("@cls || clear");

    FILE *L;
    L= fopen("PAKTC.txt","r");
    while(fgets(linie, 400, L)!= NULL)
    {
        strcat(buff, linie);
    }
    system("@cls||clear");
    puts(buff);
    memset(buff, 0, 40000);
    fclose(L);




    _getch();

    Sleep(1000);
    system("@cls || clear");
}
