#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void asciiart( ) {
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
            break;
        case 'g':

            system("cls");
            asciiart();
            system("color 3");
            printf("\n\n\n");
            system("pause");
            int a ,  b , c;
            time_t t;

            srand((unsigned) time(&t));

            int dado1 = rand() % 3;
            int dado2 = rand() % 3;
            int dado3 = rand() % 3;


            printf("\n\nCalcolo primo numero...");
            system("ping localhost -n 2.0 >nul ");
            printf("\n il primo nemero e' : %d",  dado1);
            system("ping localhost -n 1.0 >nul ");
            printf("\n\nCalcolo secondo numero...");
            system("ping localhost -n 2.0 >nul ");
            printf("\n il secondo numero e' : %d", dado2);
            system("ping localhost -n 1.0 >nul ");
            printf("\n\nCalcolo terzo numero...");
            system("ping localhost -n 2.0 >nul ");
            printf("\n il terzo numero e' : %d", dado3);

            if (dado1 == dado2 && dado2 == dado3 && dado1== dado3) {
                printf("\n\nHai vinto! ");
            } else {
                printf("\n\nhai perso\n\n");
            }

            break;

        case 'c':
            printf("\n\n Coded with love by NullDev21 ( https://github.com/NullDev21 ) ");
            break;

    }
    printf("\n\n\n\n");
    system("pause");

    return secondomain();
}


int main (void) {

    avviamento();

    system("color b");

    secondomain();

}