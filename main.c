/* ----------------------------------------------------------
 *
 *          CODED BY NULLDEV21 ON GITHUB
 *
 *----------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void asciiart( ){
    system("color b");
    printf("                                                                                                       \n"
           "        _____       _____                    _____    ____________  _____    _____           ____      \n"
           "   _____\\    \\_   /      |_             _____\\    \\  /            \\|\\    \\   \\    \\      ____\\_  \\__   \n"
           "  /     /|     | /         \\           /    / \\    ||\\___/\\  \\\\___/|\\\\    \\   |    |    /     /     \\  \n"
           " /     / /____/||     /\\    \\         |    |  /___/| \\|____\\  \\___|/ \\\\    \\  |    |   /     /\\      | \n"
           "|     | |____|/ |    |  |    \\     ____\\    \\ |   ||       |  |       \\|    \\ |    |  |     |  |     | \n"
           "|     |  _____  |     \\/      \\   /    /\\    \\|___|/  __  /   / __     |     \\|    |  |     |  |     | \n"
           "|\\     \\|\\    \\ |\\      /\\     \\ |    |/ \\    \\      /  \\/   /_/  |   /     /\\      \\ |     | /     /| \n"
           "| \\_____\\|    | | \\_____\\ \\_____\\|\\____\\ /____/|    |____________/|  /_____/ /______/||\\     \\_____/ | \n"
           "| |     /____/| | |     | |     || |   ||    | |    |           | / |      | |     | || \\_____\\   | /  \n"
           " \\|_____|    ||  \\|_____|\\|_____| \\|___||____|/     |___________|/  |______|/|_____|/  \\ |    |___|/   \n"
           "        |____|/                                                                         \\|____|       \n"
           "                                                                                By NullDev21 on GitHub");
}

int credito = 100;
int gioco() {
    int partitedagiocare, sceltafinale;
    system("color 3");
    start:
    system("cls");
    asciiart();
    printf("\n\n\n");
    printf("Quante partite vuoi giocare?"
           "\nRisposta -> ");
    scanf("%d", &partitedagiocare);

    if ( partitedagiocare > 10) {
        printf("\n Puoi giocare massimo 5 partite per volta!");
        goto start  ;
    }

    for (int i = 0; i<partitedagiocare;i++) {
        system("pause");
        int a, b, c;
        time_t t;

        srand((unsigned) time(&t));

        int dado1 = rand() % 3;
        int dado2 = rand() % 3;
        int dado3 = rand() % 3;


        printf("\n\nCalcolo primo numero...");
        system("ping localhost -n 1.0 >nul ");
        printf("\n il primo nemero e' : %d", dado1);
        system("ping localhost -n 1.0 >nul ");
        printf("\n\nCalcolo secondo numero...");
        system("ping localhost -n 1.0 >nul ");
        printf("\n il secondo numero e' : %d", dado2);
        system("ping localhost -n 1.0 >nul ");
        printf("\n\nCalcolo terzo numero...");
        system("ping localhost -n 1.0 >nul ");
        printf("\n il terzo numero e' : %d", dado3);

        if (dado1 == dado2 && dado2 == dado3 && dado1 == dado3) {
            printf("\n\nHAI VINTO 1000 CREDITI!!\n\n");
            credito = credito +  1000;
        } else if (dado1 != dado2 || dado2 != dado3 || dado1 != dado3) {
            printf("\n\nHAI PERSO 300 CREDITI !! \n\n");
            credito = credito -  300;
        } else if (dado1 == dado2 || dado2 == dado3 || dado1 == dado3  ) {
            printf("\n\nHAI VINTO 200 CREDITI!!\n\n");
            credito = credito +  200;
        }

        system("ping localhost -n 2.0 >nul ");
    }
    retorno:
    printf("Cosa vuoi fare? "
           "\n\n[1] Rigioca\n"
           "[2] Mostra credito \n"
           "[3] Esci (perderai tuo credito!)\n"
           "\nRisposta -> ");
    scanf("%d" , &sceltafinale);
    if(sceltafinale == 1) {
        goto start;
    } else if(sceltafinale == 2) {
        printf("\nIl tuo credito e' di: ");
        printf("%d",credito);
        printf("\n\n");
        system("pause");
        goto retorno;
    } else if ( sceltafinale == 3) {
        return 0;
    }
}
void avviamento(){

    for ( int i = 0; i<2 ; i++) {
        system("cls");
        system("echo la slot machine si sta avviando");
        system("ping localhost -n 2.0 >nul ");
        system("cls");
        system("echo la slot machine si sta avviando.");
        system("ping localhost -n 2.0 >nul ");
        system("cls");
        system("echo la slot machine si sta avviando..");
        system("ping localhost -n 2.0 >nul ");
        system("cls");
        system("echo la slot machine si sta avviando...");
        system("ping localhost -n 2.0 >nul ");
        system("cls");
    }
}

int indicatore () {
    printf("\n NullDev@School: ~$  ");
}

int  secondomain (void) {
    char scelta [3123] ;
    char a;
    int ritornohub;
    system("cls");
    asciiart();
    printf("\n\n");
    indicatore();
    start:


    scanf("%c", &a);
    switch (a) {
        case 'h':
            printf("\n\n\nComandi disponibili :\n"
                   "\n- g (gioca) | permetti di giocare una partita \n"
                   "- c (credits) | crediti del programma");
            printf("\n\n");
            system("pause");
            break;
        case 'g':
            return gioco();
        case 'c':
            printf("\n\n Coded with love by NullDev21 ( https://github.com/NullDev21 ) ");
            printf("\n\n");
            system("pause");
            break;

    }

    printf("\n\n\n\n");

    return secondomain();
}


int main (void) {

    avviamento();

    secondomain();

}