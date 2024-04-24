#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <windowsx.h>
#include <mmsystem.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int GetFontSize(HANDLE windowHandle, COORD *size)
{
    CONSOLE_FONT_INFOEX font = { sizeof(CONSOLE_FONT_INFOEX) };

    if (!GetCurrentConsoleFontEx(windowHandle, 0, &font))
    {
        return 0;
    }

    *size = font.dwFontSize;

    return 1;
}

int SetFontSize(HANDLE windowHandle, COORD size)
{
    CONSOLE_FONT_INFOEX font = { sizeof(CONSOLE_FONT_INFOEX) };

    if (!GetCurrentConsoleFontEx(windowHandle, 0, &font))
    {
        return 0;
    }

    font.dwFontSize = size;

    if (!SetCurrentConsoleFontEx(windowHandle, 0, &font))
    {
        return 0;
    }

    return 1;
}

int main(int argc, char *argv[])
{
    //afisarea imaginilor ascii
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


//declararea stringurilor pentru poveste
    int x;
    double y;
    char text1[]=    "\n\n \t\t\t Un pirat a pus ochii pe averea unui mare om politic, pe nume ";
    char text2[]=    "\n\n \t\t\t pe nume....................... ";
    char text3[]=    "\n\n\t\tллл   ллллллллл   ллл   ллл   ллллллллл   ллл           ллл   ллл          ллл     ллл   ллллллллл \n"
                     "\t\tллл   ллллллллл   ллл   ллл   ллллллллл   лллллл        ллл   лллллл       ллл     ллл   ллллллллл \n"
                     "\t\tллл   ллл   ллл   ллл   ллл   ллл   ллл   ллл ллл       ллл   ллл ллл      ллл     ллл   ллл       \n"
                     "\t\tллл   ллл   ллл   ллл   ллл   ллл   ллл   ллл   ллл     ллл   ллл  ллл     ллл     ллл   ллл       \n"
                     "\t\tллл   ллл   ллл   ллллллллл   ллллллллл   ллл    ллл    ллл   ллл   ллл    ллл     ллл   ллллллллл \n"
                     "\t\tллл   ллл   ллл   ллллллллл   ллллллллл   ллл     ллл   ллл   ллл    ллл   ллл     ллл   ллллллллл \n"
                     "\t\tллл   ллл   ллл   ллл   ллл   ллл   ллл   ллл      ллл  ллл   ллл     ллл  ллл     ллл         ллл \n"
                     "\t\tллл   ллл   ллл   ллл   ллл   ллл   ллл   ллл       ллл ллл   ллл      ллл ллл     ллл         ллл \n"
                     "\t\tллл   ллллллллл   ллл   ллл   ллл   ллл   ллл        лллллл   ллл       лллллл     ллл   ллллллллл \n"
                     "\t\tллл   ллллллллл   ллл   ллл   ллл   ллл   ллл           ллл   ллл          ллл     ллл   ллллллллл \n";
    char text4[]= "\n\n\n \t Iohannis este un mare sarlatan ce fura de la saraci ca sa isi constuiasca o casa in Machu Picchu. ";
    char text5[]= "\n\n\n \t Asa ca piratul vrea sa ii fure toti bani si sa ii arunce casa in aer";
    char text6[]= "\n\n\n \t Piratul are un plan dar asta o sa aflati pe parcurs.";
    char text7[]= "\n\n\n \t Hai sa intram in rolul personajului principal si sa ii explodezi tu casa lui Iohannis";
    printf("\n\n");

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD size;

    if (GetFontSize(h, &size))
    {
        size.X += (SHORT)(size.X * 2.9);
        size.Y += (SHORT)(size.Y * 2.9);
        SetFontSize(h, size);
    }
// afisarea stringurilor de mai sus(poveste)
    for(x=0; text1[x]!=NULL; x++)
    {
        printf("%c",text1[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }
    printf("\n\n");
    for(x=0; text2[x]!=NULL; x++)
    {
        printf("%c",text2[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }
    Sleep(1000);
    system("@cls || clear");
    printf("\n\n");

    for(x=0; text3[x]!=NULL; x++)
    {
        printf("%c",text3[x]);

    }
    Sleep(3000);
    system("@cls || clear");
    printf("\n\n");
    for(x=0; text4[x]!=NULL; x++)
    {
        printf("%c",text4[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }
    Sleep(3000);
    system("@cls || clear");

    for(x=0; text5[x]!=NULL; x++)
    {
        printf("%c",text5[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }
    Sleep(3000);
    system("@cls || clear");

    for(x=0; text6[x]!=NULL; x++)
    {
        printf("%c",text6[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }
    Sleep(3000);
    system("@cls || clear");

    for(x=0; text7[x]!=NULL; x++)
    {
        printf("%c",text7[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }

// Detalii player
    struct player
    {
        char nume[30];
        int varsta;

    } p;
    printf("\n\n\n \t Cum te cheama? \n \t>");
    scanf("%s",&p.nume);
    printf("\n \t Cati ani ai? \n \t>");
    scanf("%d",&p.varsta);

    system("@cls || clear");

//Stabilirea planului de actiune
    int plan;
    printf("\n\n\n \t Acum ca am aflat cum te cheama, hai sa vedem cum actionam ca sa il distrugem pe Iohannis.");
    printf("\n\n \t Avem 2 posibilitati. Ori parcurgem drumul pe uscat , ori pe apa. Ce preferi?\n\n \t");
    printf(" Alege dintre variantele de mai jos:\n \t 1. Uscat\n \t 2. Apa\n \t >");
    scanf("%d",&plan);
    if(plan==1)
    {
        printf("\n\n \t %s ai ales sa mergem pe uscat. Hai sa pornim la drum!!!",p.nume);
    }
    else if(plan==2)
    {
        printf("\n\n \t %s ai ales sa mergem pe apa. Hai sa pornim la drum!!!",p.nume);

    }
    Sleep(3000);
    system("@cls || clear");

//Alegerea vaporului/armei
    int arma;
    int vapor;
    if(plan==1)
    {

        printf("\n\n\n \t Hai sa iti alegi o arma deoarece niciodata nu stii ce poti intalni pe drum. \n \t");
        FILE *N;
        N= fopen("Arme1.txt","r");
        while(fgets(linie, 400, N)!= NULL)
        {
            strcat(buff, linie);
        }
        system("@cls||clear");
        puts(buff);
        memset(buff, 0, 40000);
        fclose(N);

        printf("\n\n\n \tCe alegi?\n \t  >");
        scanf("%d",&arma);
        printf("\n\n \tBuna alegere. Hai sa incepem.");

    }
    else if(plan==2)
    {


        printf("\n\n\n \t Hai sa iti alegi un vapor deoarece daca inotam o sa ne mananche rechini. \n \t");

        FILE *M;
        M= fopen("Vapor1.txt","r");
        while(fgets(linie, 400, M)!= NULL)
        {
            strcat(buff, linie);
        }
        system("@cls||clear");
        puts(buff);
        memset(buff, 0, 40000);
        fclose(M);

        printf("\n\n\n \tCe alegi?\n \t  >");
        scanf("%d",&vapor);
        printf("\n\n \tBuna alegere. Hai sa incepem.");
    }
    Sleep(3000);
    system("@cls || clear");

//Incepe actiunea planul 1 (uscat)
    if(plan==1)
    {
//Prima etapa
        if(arma==1)
        {
            printf("\t\t\t UN SARPE VENINOS ESTE PREGATIT SA TE ATACE. TAIE-I CAPUL\n\n");
            Sleep(3000);
            system("@cls || clear");
            {
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                COORD size;

                if (GetFontSize(h, &size))
                {
                    size.X += (SHORT)(size.X * -0.5);
                    size.Y += (SHORT)(size.Y * -0.5);
                    SetFontSize(h, size);
                }
                FILE *O;
                O= fopen("Sarpe1.txt","r");
                while(fgets(linie, 400, O)!= NULL)
                {
                    strcat(buff, linie);
                }
                system("@cls||clear");
                puts(buff);
                memset(buff, 0, 40000);
                fclose(O);
                Sleep(1500);
                system("@cls || clear");

            }
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD size;

            if (GetFontSize(h, &size))
            {
                size.X += (SHORT)(size.X * 1);
                size.Y += (SHORT)(size.Y * 1);
                SetFontSize(h, size);
            }

            printf("\n\n\t\t\t CA SA II TAI CAPUL TREBUIE SA REZOLVI URMATOARUL CALCUL IN 10 SECUNDE\n\n");
            srand(time(0));
            int sum=0,a=rand(),b=rand(),ok;


            while(ok!=1)
            {
                clock_t t;
                t = clock();
                printf("Calculeaza suma dintre %d si %d= ",a,b);
                scanf("%d",&sum);
                t = clock() - t;
                double time_taken = ((double)t)/CLOCKS_PER_SEC;

                if(time_taken>10)
                {
                    printf("Ai fost prea lent. Sarpele te-a muscat. Reincearca.\n\n");
                    ok=0;
                }
                else if(time_taken<=10)
                {
                    if(sum==a+b)
                    {
                        printf("Ai taiat capul sarpelui. Felicitari! Hai sa continuam mai departe.");
                        ok=1;
                        Sleep(3000);
                        {
                            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                            COORD size;

                            if (GetFontSize(h, &size))
                            {
                                size.X += (SHORT)(size.X * -0.5);
                                size.Y += (SHORT)(size.Y * -0.5);
                                SetFontSize(h, size);
                            }
                            FILE *P;
                            P= fopen("Sarpe2.txt","r");
                            while(fgets(linie, 400, P)!= NULL)
                            {
                                strcat(buff, linie);
                            }
                            system("@cls||clear");
                            puts(buff);
                            memset(buff, 0, 40000);
                            fclose(P);
                            Sleep(1500);
                            system("@cls || clear");

                        }
                        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                        COORD size;

                        if (GetFontSize(h, &size))
                        {
                            size.X += (SHORT)(size.X * 1);
                            size.Y += (SHORT)(size.Y * 1);
                            SetFontSize(h, size);
                        }
                    }
                    else if(sum!=a+ b)
                    {
                        printf("Ai gresit. Sarpele te-a muscat. Reincearca.\n\n");
                        ok=0;
                    }

                }
            }

        }
        else if(arma==2)
        {
            printf("UN SARPE VENINOS ESTE PREGATIT SA TE ATACE. IMPUSCA-L");
            Sleep(1500);
            system("@cls || clear");
            {
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                COORD size;

                if (GetFontSize(h, &size))
                {
                    size.X += (SHORT)(size.X * -0.5);
                    size.Y += (SHORT)(size.Y * -0.5);
                    SetFontSize(h, size);
                }
                FILE *O;
                O= fopen("Sarpe1.txt","r");
                while(fgets(linie, 400, O)!= NULL)
                {
                    strcat(buff, linie);
                }
                system("@cls||clear");
                puts(buff);
                memset(buff, 0, 40000);
                fclose(O);
                Sleep(1500);
                system("@cls || clear");

            }
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD size;

            if (GetFontSize(h, &size))
            {
                size.X += (SHORT)(size.X * 1);
                size.Y += (SHORT)(size.Y * 1);
                SetFontSize(h, size);
            }

            printf("\n\n\t\t\t CA SA IMPUSTI SARPELE TREBUIE SA REZOLVI URMATOARUL CALCUL IN 20 SECUNDE\n\n");
            srand(time(0));
            int sum=0,a=rand(),b=rand(),ok;


            while(ok!=1)
            {
                clock_t t;
                t = clock();
                printf("Calculeaza suma dintre %d si %d= ",a,b);
                scanf("%d",&sum);
                t = clock() - t;
                double time_taken = ((double)t)/CLOCKS_PER_SEC;

                if(time_taken>20)
                {
                    printf("Ai fost prea lent. Sarpele te-a muscat. Reincearca.\n\n");
                    ok=0;
                }
                else if(time_taken<=20)
                {
                    if(sum==a+b)
                    {
                        printf("Ai taiat capul sarpelui. Felicitari! Hai sa continuam mai departe.");
                        ok=1;
                        Sleep(3000);
                        {
                            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                            COORD size;

                            if (GetFontSize(h, &size))
                            {
                                size.X += (SHORT)(size.X * -0.5);
                                size.Y += (SHORT)(size.Y * -0.5);
                                SetFontSize(h, size);
                            }
                            FILE *P;
                            P= fopen("Sarpe2.txt","r");
                            while(fgets(linie, 400, P)!= NULL)
                            {
                                strcat(buff, linie);
                            }
                            system("@cls||clear");
                            puts(buff);
                            memset(buff, 0, 40000);
                            fclose(P);
                            Sleep(1500);
                            system("@cls || clear");

                        }
                        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                        COORD size;

                        if (GetFontSize(h, &size))
                        {
                            size.X += (SHORT)(size.X * 1);
                            size.Y += (SHORT)(size.Y * 1);
                            SetFontSize(h, size);
                        }
                    }
                    else if(sum!=a+ b)
                    {
                        printf("Ai gresit. Sarpele te-a muscat. Reincearca.\n\n");
                        ok=0;
                    }

                }
            }
        }
// A doua etapa
        if(arma==1)
        {
            printf("\t\t\t UN CROCODIL ESTE PREGATIT SA TE MANANCE. UCIDE-L\n\n");
            Sleep(1500);
            system("@cls || clear");
            {
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                COORD size;

                if (GetFontSize(h, &size))
                {
                    size.X += (SHORT)(size.X * -0.5);
                    size.Y += (SHORT)(size.Y * -0.5);
                    SetFontSize(h, size);
                }
                FILE *O;
                O= fopen("Crocodil1.txt","r");
                while(fgets(linie, 400, O)!= NULL)
                {
                    strcat(buff, linie);
                }
                system("@cls||clear");
                puts(buff);
                memset(buff, 0, 40000);
                fclose(O);
                Sleep(1500);
                system("@cls || clear");

            }
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD size;

            if (GetFontSize(h, &size))
            {
                size.X += (SHORT)(size.X * 1);
                size.Y += (SHORT)(size.Y * 1);
                SetFontSize(h, size);
            }

            printf("\n\n\t\t\t CA SA II TAI CAPUL TREBUIE SA REZOLVI URMATOARUL CALCUL IN 10 SECUNDE\n\n");
            srand(time(0));
            int sum=0,a=rand(),b=rand(),ok;


            while(ok!=1)
            {
                clock_t t;
                t = clock();
                printf("Calculeaza diferenta dintre %d si %d= ",a,b);
                scanf("%d",&sum);
                t = clock() - t;
                double time_taken = ((double)t)/CLOCKS_PER_SEC;

                if(time_taken>10)
                {
                    printf("Ai fost prea lent. Crocodilul te-a mancat. Reincearca.\n\n");
                    ok=0;
                }
                else if(time_taken<=10)
                {
                    if(sum==a-b)
                    {
                        printf("Ai ucis crocodilul. Felicitari! Hai sa continuam mai departe.");
                        ok=1;
                        Sleep(3000);
                        {
                            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                            COORD size;

                            if (GetFontSize(h, &size))
                            {
                                size.X += (SHORT)(size.X * -0.5);
                                size.Y += (SHORT)(size.Y * -0.5);
                                SetFontSize(h, size);
                            }
                            FILE *P;
                            P= fopen("Crocodil2.txt","r");
                            while(fgets(linie, 400, P)!= NULL)
                            {
                                strcat(buff, linie);
                            }
                            system("@cls||clear");
                            puts(buff);
                            memset(buff, 0, 40000);
                            fclose(P);
                            Sleep(1500);
                            system("@cls || clear");

                        }
                        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                        COORD size;

                        if (GetFontSize(h, &size))
                        {
                            size.X += (SHORT)(size.X * 1);
                            size.Y += (SHORT)(size.Y * 1);
                            SetFontSize(h, size);
                        }
                    }
                    else if(sum!=a-b)
                    {
                        printf("Ai gresit. Crocodilul te-a mancat. Reincearca.\n\n");
                        ok=0;
                    }

                }
            }

        }
        else if(arma==2)
        {
            printf("\t\t\t UN CROCODIL ESTE PREGATIT SA TE MANANCE. UCIDE-L\n\n");
            Sleep(1500);
            system("@cls || clear");
            {
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                COORD size;

                if (GetFontSize(h, &size))
                {
                    size.X += (SHORT)(size.X * -0.5);
                    size.Y += (SHORT)(size.Y * -0.5);
                    SetFontSize(h, size);
                }
                FILE *O;
                O= fopen("Crocodil1.txt","r");
                while(fgets(linie, 400, O)!= NULL)
                {
                    strcat(buff, linie);
                }
                system("@cls||clear");
                puts(buff);
                memset(buff, 0, 40000);
                fclose(O);
                Sleep(1500);
                system("@cls || clear");

            }
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD size;

            if (GetFontSize(h, &size))
            {
                size.X += (SHORT)(size.X * 1);
                size.Y += (SHORT)(size.Y * 1);
                SetFontSize(h, size);
            }

            printf("\n\n\t\t\t CA SA IMPUSTI CROCODILUL TREBUIE SA REZOLVI URMATORUL CALCUL IN 20 SECUNDE\n\n");
            srand(time(0));
            int sum=0,a=rand(),b=rand(),ok;


            while(ok!=1)
            {
                clock_t t;
                t = clock();
                printf("Calculeaza diferenta dintre %d si %d= ",a,b);
                scanf("%d",&sum);
                t = clock() - t;
                double time_taken = ((double)t)/CLOCKS_PER_SEC;

                if(time_taken>20)
                {
                    printf("Ai fost prea lent. Crocodilul te-a mancat. Reincearca.\n\n");
                    ok=0;
                }
                else if(time_taken<=20)
                {
                    if(sum==a-b)
                    {
                        printf("Ai ucis crocodilul. Felicitari! Hai sa continuam mai departe.");
                        ok=1;
                        Sleep(3000);
                        {
                            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                            COORD size;

                            if (GetFontSize(h, &size))
                            {
                                size.X += (SHORT)(size.X * -0.5);
                                size.Y += (SHORT)(size.Y * -0.5);
                                SetFontSize(h, size);
                            }
                            FILE *P;
                            P= fopen("Crocodil2.txt","r");
                            while(fgets(linie, 400, P)!= NULL)
                            {
                                strcat(buff, linie);
                            }
                            system("@cls||clear");
                            puts(buff);
                            memset(buff, 0, 40000);
                            fclose(P);
                            Sleep(1500);
                            system("@cls || clear");

                        }
                        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                        COORD size;

                        if (GetFontSize(h, &size))
                        {
                            size.X += (SHORT)(size.X * 1);
                            size.Y += (SHORT)(size.Y * 1);
                            SetFontSize(h, size);
                        }
                    }
                    else if(sum!=a-b)
                    {
                        printf("Ai gresit. Crocodilul te-a mancat. Reincearca.\n\n");
                        ok=0;
                    }

                }
            }
        }
//A treia etapa
        if(arma==1)
        {
            printf("\t\t\t AI INTALNIT UN PIRAT CE DETINE BOMBE. DACA IL AJUTI, TE V-A AJUTA SI EL \n\n"
                   "\t\t\t         CU BOMBELE PENTRU A II ARUNCA CASA IN AER LUI IOHANNIS \n\n");
            Sleep(3000);
            system("@cls || clear");
            {
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                COORD size;

                if (GetFontSize(h, &size))
                {
                    size.X += (SHORT)(size.X * -0.5);
                    size.Y += (SHORT)(size.Y * -0.5);
                    SetFontSize(h, size);
                }
                FILE *O;
                O= fopen("Bombe1.txt","r");
                while(fgets(linie, 400, O)!= NULL)
                {
                    strcat(buff, linie);
                }
                system("@cls||clear");
                puts(buff);
                memset(buff, 0, 40000);
                fclose(O);
                Sleep(1500);
                system("@cls || clear");

            }
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD size;

            if (GetFontSize(h, &size))
            {
                size.X += (SHORT)(size.X * 1);
                size.Y += (SHORT)(size.Y * 1);
                SetFontSize(h, size);
            }

            printf("\n\n\t\t\t CA SA IL AJUTI PE PIRAT TREBUIE SA REZOLVI URMATOARUL CALCUL IN 10 SECUNDE\n\n");
            srand(time(0));
            int sum=0,a=rand(),b=rand(),ok;


            while(ok!=1)
            {
                clock_t t;
                t = clock();
                printf("Calculeaza produsul dintre %d si %d= ",a,b);
                scanf("%d",&sum);
                t = clock() - t;
                double time_taken = ((double)t)/CLOCKS_PER_SEC;

                if(time_taken>20)
                {
                    printf("Ai fost prea lent. Piratul te-a parasit. Reincearca.\n\n");
                    ok=0;
                }
                else if(time_taken<=20)
                {
                    if(sum==a*b)
                    {
                        printf("Ai ajutat piratul. Felicitari! Acum te v-a ajuta si el pe tine. Momentul cel mare a ajuns!");
                        ok=1;
                        Sleep(3000);
                        {
                            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                            COORD size;

                            if (GetFontSize(h, &size))
                            {
                                size.X += (SHORT)(size.X * -0.5);
                                size.Y += (SHORT)(size.Y * -0.5);
                                SetFontSize(h, size);
                            }
                            FILE *P;
                            P= fopen("Bombe1.txt","r");
                            while(fgets(linie, 400, P)!= NULL)
                            {
                                strcat(buff, linie);
                            }
                            system("@cls||clear");
                            puts(buff);
                            memset(buff, 0, 40000);
                            fclose(P);
                            Sleep(1500);
                            system("@cls || clear");

                        }
                        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                        COORD size;

                        if (GetFontSize(h, &size))
                        {
                            size.X += (SHORT)(size.X * 1);
                            size.Y += (SHORT)(size.Y * 1);
                            SetFontSize(h, size);
                        }
                    }
                    else if(sum!=a*b)
                    {
                        printf("Ai gresit. Piratul te-a parasit. Reincearca.\n\n");
                        ok=0;
                    }

                }
            }

        }
        else if(arma==2)
        {
            printf("\t\t\t AI INTALNIT UN PIRAT CE DETINE BOMBE. DACA IL AJUTI, TE V-A AJUTA SI EL \n\n"
                   "\t\t\t         CU BOMBELE PENTRU A II ARUNCA CASA IN AER LUI IOHANNIS \n\n");
            Sleep(1500);
            system("@cls || clear");
            {
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                COORD size;

                if (GetFontSize(h, &size))
                {
                    size.X += (SHORT)(size.X * -0.5);
                    size.Y += (SHORT)(size.Y * -0.5);
                    SetFontSize(h, size);
                }
                FILE *O;
                O= fopen("Bombe1.txt","r");
                while(fgets(linie, 400, O)!= NULL)
                {
                    strcat(buff, linie);
                }
                system("@cls||clear");
                puts(buff);
                memset(buff, 0, 40000);
                fclose(O);
                Sleep(1500);
                system("@cls || clear");

            }
            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            COORD size;

            if (GetFontSize(h, &size))
            {
                size.X += (SHORT)(size.X * 1);
                size.Y += (SHORT)(size.Y * 1);
                SetFontSize(h, size);
            }

            printf("\n\n\t\t\t CA SA IL AJUTI PE PIRAT TREBUIE SA REZOLVI URMATOARUL CALCUL IN 10 SECUNDE\n\n");
            srand(time(0));
            int sum=0,a=rand(),b=rand(),ok;


            while(ok!=1)
            {
                clock_t t;
                t = clock();
                printf("Calculeaza produsul dintre %d si %d= ",a,b);
                scanf("%d",&sum);
                t = clock() - t;
                double time_taken = ((double)t)/CLOCKS_PER_SEC;

                if(time_taken>20)
                {
                    printf("Ai fost prea lent. Piratul te-a parasit. Reincearca.\n\n");
                    ok=0;
                }
                else if(time_taken<=20)
                {
                    if(sum==a*b)
                    {
                        printf("Ai ajutat piratul. Felicitari! Acum te v-a ajuta si el pe tine. Momentul cel mare a ajuns!");
                        ok=1;
                        Sleep(3000);
                        {
                            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                            COORD size;

                            if (GetFontSize(h, &size))
                            {
                                size.X += (SHORT)(size.X * -0.5);
                                size.Y += (SHORT)(size.Y * -0.5);
                                SetFontSize(h, size);
                            }
                            FILE *P;
                            P= fopen("Bombe1.txt","r");
                            while(fgets(linie, 400, P)!= NULL)
                            {
                                strcat(buff, linie);
                            }
                            system("@cls||clear");
                            puts(buff);
                            memset(buff, 0, 40000);
                            fclose(P);
                            Sleep(1500);
                            system("@cls || clear");

                        }
                        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                        COORD size;

                        if (GetFontSize(h, &size))
                        {
                            size.X += (SHORT)(size.X * 1);
                            size.Y += (SHORT)(size.Y * 1);
                            SetFontSize(h, size);
                        }
                    }
                    else if(sum!=a*b)
                    {
                        printf("Ai gresit. Piratul te-a parasit. Reincearca.\n\n");
                        ok=0;
                    }

                }
            }
        }
    }
    else
//Planul 2(apa)
        if(plan==2)
        {
//Prima etapa
            if(vapor==1)
            {
                printf("\t\t\t UN MONSTRU MARIN VREA SA ITI MANANCE VAPORUL. OMOARA-L\n\n");
                Sleep(3000);
                system("@cls || clear");
                {
                    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                    COORD size;

                    if (GetFontSize(h, &size))
                    {
                        size.X += (SHORT)(size.X * -0.5);
                        size.Y += (SHORT)(size.Y * -0.5);
                        SetFontSize(h, size);
                    }
                    FILE *Q;
                    Q= fopen("Monstru1.txt","r");
                    while(fgets(linie, 400, Q)!= NULL)
                    {
                        strcat(buff, linie);
                    }
                    system("@cls||clear");
                    puts(buff);
                    memset(buff, 0, 40000);
                    fclose(Q);
                    Sleep(1500);
                    system("@cls || clear");

                }
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                COORD size;

                if (GetFontSize(h, &size))
                {
                    size.X += (SHORT)(size.X * 1);
                    size.Y += (SHORT)(size.Y * 1);
                    SetFontSize(h, size);
                }

                printf("\n\n\t\t\t CA SA IL OMORI TREBUIE SA SCRII URMATOAREA PROPOZITIE IN 5 SECUNDE\n\n");
                int ok=0;
                char prop[20];

                while(ok!=1)
                {
                    int i=0;
                    clock_t t;
                    t = clock();
                    printf("Scrie: Ataca monstrul\n >");
                    gets(&prop);
                    t = clock() - t;
                    double time_taken = ((double)t)/CLOCKS_PER_SEC;

                    if(time_taken>5)
                    {
                        printf("\n\nAi fost prea lent. Monstrul ti-a mancat vaporul. Reincearca.\n\n");
                        ok=0;
                    }
                    else if(time_taken<=5)
                    {
                        if(strcmp(prop,"Ataca monstrul")==0)
                        {
                            printf("\n\nAi omorat monstrul. Felicitari! Hai sa continuam mai departe.");
                            ok=1;
                            Sleep(3000);
                            {
                                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                                COORD size;

                                if (GetFontSize(h, &size))
                                {
                                    size.X += (SHORT)(size.X * -0.5);
                                    size.Y += (SHORT)(size.Y * -0.5);
                                    SetFontSize(h, size);
                                }
                                FILE *R;
                                R= fopen("Monstru2.txt","r");
                                while(fgets(linie, 400, R)!= NULL)
                                {
                                    strcat(buff, linie);
                                }
                                system("@cls||clear");
                                puts(buff);
                                memset(buff, 0, 40000);
                                fclose(R);
                                Sleep(1500);
                                system("@cls || clear");

                            }
                            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                            COORD size;

                            if (GetFontSize(h, &size))
                            {
                                size.X += (SHORT)(size.X * 1);
                                size.Y += (SHORT)(size.Y * 1);
                                SetFontSize(h, size);
                            }
                        }
                        else if(strcmp(prop,"Ataca monstrul")!=0)
                        {
                            printf("\n\nAi gresit. Monstrul ti-a mancat vaporul. Reincearca.\n\n");
                            ok=0;
                        }

                    }
                }

            }
            else if(vapor==2)
            {
                printf("\t\t\t UN MONSTRU MARIN VREA SA ITI MANANCE VAPORUL. OMOARA-L\n\n");
                Sleep(1500);
                system("@cls || clear");
                {
                    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                    COORD size;

                    if (GetFontSize(h, &size))
                    {
                        size.X += (SHORT)(size.X * -0.5);
                        size.Y += (SHORT)(size.Y * -0.5);
                        SetFontSize(h, size);
                    }
                    FILE *O;
                    O= fopen("Sarpe1.txt","r");
                    while(fgets(linie, 400, O)!= NULL)
                    {
                        strcat(buff, linie);
                    }
                    system("@cls||clear");
                    puts(buff);
                    memset(buff, 0, 40000);
                    fclose(O);
                    Sleep(1500);
                    system("@cls || clear");

                }
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                COORD size;

                if (GetFontSize(h, &size))
                {
                    size.X += (SHORT)(size.X * 1);
                    size.Y += (SHORT)(size.Y * 1);
                    SetFontSize(h, size);
                }

                printf("\n\n\t\t\t CA SA IL OMORI TREBUIE SA SCRII URMATOAREA PROPOZITIE IN 10 SECUNDE\n\n");
                int ok=0;
                char prop[20];

                while(ok!=1)
                {
                    int i=0;
                    clock_t t;
                    t = clock();
                    printf("Scrie: Ataca monstrul\n >");
                    gets(&prop);
                    t = clock() - t;
                    double time_taken = ((double)t)/CLOCKS_PER_SEC;

                    if(time_taken>10)
                    {
                        printf("\n\nAi fost prea lent. Monstrul ti-a mancat vaporul. Reincearca.\n\n");
                        ok=0;
                    }
                    else if(time_taken<=10)
                    {
                        if(strcmp(prop,"Ataca monstrul")==0)
                        {
                            printf("\n\nAi omorat monstrul. Felicitari! Hai sa continuam mai departe.");
                            ok=1;
                            Sleep(3000);
                            {
                                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                                COORD size;

                                if (GetFontSize(h, &size))
                                {
                                    size.X += (SHORT)(size.X * -0.5);
                                    size.Y += (SHORT)(size.Y * -0.5);
                                    SetFontSize(h, size);
                                }
                                FILE *P;
                                P= fopen("Sarpe2.txt","r");
                                while(fgets(linie, 400, P)!= NULL)
                                {
                                    strcat(buff, linie);
                                }
                                system("@cls||clear");
                                puts(buff);
                                memset(buff, 0, 40000);
                                fclose(P);
                                Sleep(1500);
                                system("@cls || clear");

                            }
                            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                            COORD size;

                            if (GetFontSize(h, &size))
                            {
                                size.X += (SHORT)(size.X * 1);
                                size.Y += (SHORT)(size.Y * 1);
                                SetFontSize(h, size);
                            }
                        }
                        else if(strcmp(prop,"Ataca monstrul")!=0)
                        {
                            printf("\n\nAi gresit. Monstrul ti-a mancat vaporul. Reincearca.\n\n");
                            ok=0;
                        }

                    }
                }
            }
//A doua etapa
            if(vapor==1)
            {
                printf("\t\t\t UN RECHIN VREA SA ITI DISTRUGA VAPORUL VAPORUL. OMOARA-L\n\n");
                Sleep(3000);
                system("@cls || clear");

                {
                    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                    COORD size;

                    if (GetFontSize(h, &size))
                    {
                        size.X += (SHORT)(size.X * -0.5);
                        size.Y += (SHORT)(size.Y * -0.5);
                        SetFontSize(h, size);
                    }
                    FILE *Q;
                    Q= fopen("Rechin1.txt","r");
                    while(fgets(linie, 400, Q)!= NULL)
                    {
                        strcat(buff, linie);
                    }
                    system("@cls||clear");
                    puts(buff);
                    memset(buff, 0, 40000);
                    fclose(Q);
                    Sleep(1500);
                    system("@cls || clear");

                }
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                COORD size;

                if (GetFontSize(h, &size))
                {
                    size.X += (SHORT)(size.X * 1);
                    size.Y += (SHORT)(size.Y * 1);
                    SetFontSize(h, size);
                }

                printf("\n\n\t\t\t CA SA IL OMORI TREBUIE SA SCRII URMATOAREA PROPOZITIE IN 5 SECUNDE\n\n");
                int ok=0;
                char prop[20];

                while(ok!=1)
                {
                    int i=0;
                    clock_t t;
                    t = clock();
                    printf("Scrie: Ataca rechinul\n >");
                    gets(&prop);
                    t = clock() - t;
                    double time_taken = ((double)t)/CLOCKS_PER_SEC;

                    if(time_taken>5)
                    {
                        printf("\n\nAi fost prea lent. Rechinul te-a mancat. Reincearca.\n\n");
                        ok=0;
                    }
                    else if(time_taken<=5)
                    {
                        if(strcmp(prop,"Ataca rechinul")==0)
                        {
                            printf("\n\nAi omorat rechinul. Felicitari! Hai sa continuam mai departe.");
                            ok=1;
                            Sleep(3000);
                            {
                                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                                COORD size;

                                if (GetFontSize(h, &size))
                                {
                                    size.X += (SHORT)(size.X * -0.5);
                                    size.Y += (SHORT)(size.Y * -0.5);
                                    SetFontSize(h, size);
                                }
                                FILE *R;
                                R= fopen("Rechin2.txt","r");
                                while(fgets(linie, 400, R)!= NULL)
                                {
                                    strcat(buff, linie);
                                }
                                system("@cls||clear");
                                puts(buff);
                                memset(buff, 0, 40000);
                                fclose(R);
                                Sleep(1500);
                                system("@cls || clear");

                            }
                            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                            COORD size;

                            if (GetFontSize(h, &size))
                            {
                                size.X += (SHORT)(size.X * 1);
                                size.Y += (SHORT)(size.Y * 1);
                                SetFontSize(h, size);
                            }
                        }
                        else if(strcmp(prop,"Ataca rechinul")!=0)
                        {
                            printf("\n\nAi gresit. Rechinul te-a mancat. Reincearca.\n\n");
                            ok=0;
                        }

                    }
                }

            }
            else if(vapor==2)
            {
                printf("\t\t\t UN RECHIN VREA SA ITI DISTRUGA VAPORUL VAPORUL. OMOARA-L\n\n");
                Sleep(3000);
                system("@cls || clear");

                {
                    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                    COORD size;

                    if (GetFontSize(h, &size))
                    {
                        size.X += (SHORT)(size.X * -0.5);
                        size.Y += (SHORT)(size.Y * -0.5);
                        SetFontSize(h, size);
                    }
                    FILE *Q;
                    Q= fopen("Rechin1.txt","r");
                    while(fgets(linie, 400, Q)!= NULL)
                    {
                        strcat(buff, linie);
                    }
                    system("@cls||clear");
                    puts(buff);
                    memset(buff, 0, 40000);
                    fclose(Q);
                    Sleep(1500);
                    system("@cls || clear");

                }
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                COORD size;

                if (GetFontSize(h, &size))
                {
                    size.X += (SHORT)(size.X * 1);
                    size.Y += (SHORT)(size.Y * 1);
                    SetFontSize(h, size);
                }

                printf("\n\n\t\t\t CA SA IL OMORI TREBUIE SA SCRII URMATOAREA PROPOZITIE IN 10 SECUNDE\n\n");
                int ok=0;
                char prop[20];

                while(ok!=1)
                {
                    int i=0;
                    clock_t t;
                    t = clock();
                    printf("Scrie: Ataca rechinul\n >");
                    gets(&prop);
                    t = clock() - t;
                    double time_taken = ((double)t)/CLOCKS_PER_SEC;

                    if(time_taken>10)
                    {
                        printf("\n\nAi fost prea lent. Rechinul te-a mancat. Reincearca.\n\n");
                        ok=0;
                    }
                    else if(time_taken<=10)
                    {
                        if(strcmp(prop,"Ataca rechinul")==0)
                        {
                            printf("\n\nAi omorat rechinul. Felicitari! Hai sa continuam mai departe.");
                            ok=1;
                            Sleep(3000);
                            {
                                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                                COORD size;

                                if (GetFontSize(h, &size))
                                {
                                    size.X += (SHORT)(size.X * -0.5);
                                    size.Y += (SHORT)(size.Y * -0.5);
                                    SetFontSize(h, size);
                                }
                                FILE *R;
                                R= fopen("Rechin2.txt","r");
                                while(fgets(linie, 400, R)!= NULL)
                                {
                                    strcat(buff, linie);
                                }
                                system("@cls||clear");
                                puts(buff);
                                memset(buff, 0, 40000);
                                fclose(R);
                                Sleep(1500);
                                system("@cls || clear");

                            }
                            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                            COORD size;

                            if (GetFontSize(h, &size))
                            {
                                size.X += (SHORT)(size.X * 1);
                                size.Y += (SHORT)(size.Y * 1);
                                SetFontSize(h, size);
                            }
                        }
                        else if(strcmp(prop,"Ataca rechinul")!=0)
                        {
                            printf("\n\nAi gresit. Rechinul te-a mancat. Reincearca.\n\n");
                            ok=0;
                        }

                    }
                }
            }
//A treia etapa
            if(vapor==1)
            {
                printf("\t\t\t AI INTALNIT UN PIRAT CE DETINE BOMBE. DACA IL AJUTI, TE V-A AJUTA SI EL \n\n"
                       "\t\t\t         CU BOMBELE PENTRU A II ARUNCA CASA IN AER LUI IOHANNIS \n\n");
                Sleep(8000);
                system("@cls || clear");

                {
                    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                    COORD size;

                    if (GetFontSize(h, &size))
                    {
                        size.X += (SHORT)(size.X * -0.5);
                        size.Y += (SHORT)(size.Y * -0.5);
                        SetFontSize(h, size);
                    }
                    FILE *Q;
                    Q= fopen("Bombe1.txt","r");
                    while(fgets(linie, 400, Q)!= NULL)
                    {
                        strcat(buff, linie);
                    }
                    system("@cls||clear");
                    puts(buff);
                    memset(buff, 0, 40000);
                    fclose(Q);
                    Sleep(1500);
                    system("@cls || clear");

                }
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                COORD size;

                if (GetFontSize(h, &size))
                {
                    size.X += (SHORT)(size.X * 1);
                    size.Y += (SHORT)(size.Y * 1);
                    SetFontSize(h, size);
                }

                printf("\n\n\t\t\t CA SA IL AJUTI PE PIRAT TREBUIE SA REZOLVI URMATOARUL CALCUL IN 10 SECUNDE\n\n");
                int ok=0;
                char prop[20];

                while(ok!=1)
                {
                    int i=0;
                    clock_t t;
                    t = clock();
                    printf("Scrie: Ajuta piratul\n >");
                    gets(&prop);
                    t = clock() - t;
                    double time_taken = ((double)t)/CLOCKS_PER_SEC;

                    if(time_taken>5)
                    {
                        printf("\n\nAi fost prea lent. Piratul te-a parasit. Reincearca.\n\n");
                        ok=0;
                    }
                    else if(time_taken<=5)
                    {
                        if(strcmp(prop,"Ajuta piratul")==0)
                        {
                            printf("\n\nAi ajutat piratul. Felicitari! Acum te v-a ajuta si el pe tine. Momentul cel mare a ajuns!");
                            ok=1;
                            Sleep(3000);
                            {
                                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                                COORD size;

                                if (GetFontSize(h, &size))
                                {
                                    size.X += (SHORT)(size.X * -0.5);
                                    size.Y += (SHORT)(size.Y * -0.5);
                                    SetFontSize(h, size);
                                }
                                FILE *R;
                                R= fopen("Bombe1.txt","r");
                                while(fgets(linie, 400, R)!= NULL)
                                {
                                    strcat(buff, linie);
                                }
                                system("@cls||clear");
                                puts(buff);
                                memset(buff, 0, 40000);
                                fclose(R);
                                Sleep(1500);
                                system("@cls || clear");

                            }
                            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                            COORD size;

                            if (GetFontSize(h, &size))
                            {
                                size.X += (SHORT)(size.X * 1);
                                size.Y += (SHORT)(size.Y * 1);
                                SetFontSize(h, size);
                            }
                        }
                        else if(strcmp(prop,"Ajuta piratul")!=0)
                        {
                            printf("\n\nAi gresit. Piratul te-a parasit. Reincearca.\n\n");
                            ok=0;
                        }

                    }
                }

            }
            else if(vapor==2)
            {
                printf("\t\t\t AI INTALNIT UN PIRAT CE DETINE BOMBE. DACA IL AJUTI, TE V-A AJUTA SI EL \n\n"
                       "\t\t\t         CU BOMBELE PENTRU A II ARUNCA CASA IN AER LUI IOHANNIS \n\n");
                Sleep(5000);
                system("@cls || clear");

                {
                    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                    COORD size;

                    if (GetFontSize(h, &size))
                    {
                        size.X += (SHORT)(size.X * -0.5);
                        size.Y += (SHORT)(size.Y * -0.5);
                        SetFontSize(h, size);
                    }
                    FILE *Q;
                    Q= fopen("Bombe1.txt","r");
                    while(fgets(linie, 400, Q)!= NULL)
                    {
                        strcat(buff, linie);
                    }
                    system("@cls||clear");
                    puts(buff);
                    memset(buff, 0, 40000);
                    fclose(Q);
                    Sleep(1500);
                    system("@cls || clear");

                }
                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                COORD size;

                if (GetFontSize(h, &size))
                {
                    size.X += (SHORT)(size.X * 1);
                    size.Y += (SHORT)(size.Y * 1);
                    SetFontSize(h, size);
                }

                printf("\n\n\t\t\t CA SA IL AJUTI PE PIRAT TREBUIE SA REZOLVI URMATOARUL CALCUL IN 10 SECUNDE\n\n");
                int ok=0;
                char prop[20];

                while(ok!=1)
                {
                    int i=0;
                    clock_t t;
                    t = clock();
                    printf("Scrie: Ajuta piratul\n >");
                    gets(&prop);
                    t = clock() - t;
                    double time_taken = ((double)t)/CLOCKS_PER_SEC;

                    if(time_taken>10)
                    {
                        printf("\n\nAi fost prea lent. Piratul te-a parasit. Reincearca.\n\n");
                        ok=0;
                    }
                    else if(time_taken<=10)
                    {
                        if(strcmp(prop,"Ajuta piratul")==0)
                        {
                            printf("\n\nAi ajutat piratul. Felicitari! Acum te v-a ajuta si el pe tine. Momentul cel mare a ajuns!");
                            ok=1;
                            Sleep(3000);
                            {
                                HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                                COORD size;

                                if (GetFontSize(h, &size))
                                {
                                    size.X += (SHORT)(size.X * -0.5);
                                    size.Y += (SHORT)(size.Y * -0.5);
                                    SetFontSize(h, size);
                                }
                                FILE *R;
                                R= fopen("Bombe1.txt","r");
                                while(fgets(linie, 400, R)!= NULL)
                                {
                                    strcat(buff, linie);
                                }
                                system("@cls||clear");
                                puts(buff);
                                memset(buff, 0, 40000);
                                fclose(R);
                                Sleep(1500);
                                system("@cls || clear");

                            }
                            HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
                            COORD size;

                            if (GetFontSize(h, &size))
                            {
                                size.X += (SHORT)(size.X * 1);
                                size.Y += (SHORT)(size.Y * 1);
                                SetFontSize(h, size);
                            }
                        }
                        else if(strcmp(prop,"Ajuta piratul")!=0)
                        {
                            printf("\n\nAi gresit. Piratul te-a parasit. Reincearca.\n\n");
                            ok=0;
                        }

                    }
                }
            }

        }
    Sleep(1500);
    system("@cls || clear");
    srand(time(0));
    int a=rand(),b=rand(),c=rand();
    float ma=0;
    printf("\n\n\tIMPREUNA CU PIRATUL PE CARE L-AI AJUTAT VE-TI ARUNCA CASA LUI IOHANNIS IN AER SI VE-TI FURA SI BANII LUI\n\n"
           "CA SA UMPLETI CASA LUI IOHANNIS CU BOMBE TREBUIE SA EFECTUATI MEDIA ARITMETICA DINTRE URMATOARELE 3 NUMERE: %d, %d, %d IN 1 MINUT\n>",a,b,c);
                    clock_t t;
                    t = clock();
                    scanf("%f",&ma);
                    t = clock() - t;
                    double time_taken = ((double)t)/CLOCKS_PER_SEC;
                 if(time_taken>60)
                 {
                   printf("\n\nAi fost prea lent. Iohannis v-a prins si v-a bagat in inchisoare. Ai pierdut\n\n");

                 }
                 if(time_taken<=60)
                 {
                     if(ma=(a+b+c)/3)
                       printf("\n\nAI CASTIGAT. I-ATI ARUNCAT CASA LUI IOHANNIS IS AER SI ATI FURAT BANI. FELICITARI. A-TI CASTIGAT\n\n");
                     else
                        if(ma!=(a+b+c)/3)
                           printf("\n\nAi gresit. Iohannis v-a prins si v-a bagat in inchisoare. Ai pierdut\n\n");
                 }

    Sleep(1500);
    system("@cls || clear");

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t GAME OVER\n\n\n\n\n\n\n\n\n\n\n\n");



    return EXIT_SUCCESS;

}
