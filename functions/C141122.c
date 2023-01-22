//
//  C141122.c
//  LanguageC
//
//  Created by Nicolas Bonfond on 14/11/2022.
//

#include "C141122.h"

//variables fGetVoyelles
int dCountA;
int dCountE;
int dCountU;
int dCountI;
int dCountO;
int dCountY;
char cChar;


void fGetVoyelles (void) {
    printf("Compteur de voyelle \n");

    //getchar
    printf("Veuillez introduire une phrase (press enter when finish) \n");
    cChar = getchar();
    
    //init
    dCountA = 0;
    dCountE = 0;
    dCountI = 0;
    dCountO = 0;
    dCountU = 0;
    dCountY = 0;
    
    
    //boucle lecture
    cChar = getchar();
    while (cChar != '\n') {
        if (cChar=='a' || cChar=='A') {
            dCountA ++;
        };
        if (cChar=='e' || cChar=='E') {
            dCountE ++;
        };
        if (cChar=='Y' || cChar=='y') {
            dCountY ++;
        };
        if (cChar=='u' || cChar=='U') {
            dCountU ++;
        };
        if (cChar=='i' || cChar=='I') {
            dCountI ++;
        };
        if (cChar=='o' || cChar=='O') {
        
            dCountO ++;
        }
        
        cChar = getchar();

    }
    //affichage
    
    //Lettre A
    int i = 0;
    printf("\nLe nombre de lettre A est de : %d \n",dCountA);
    while (i < dCountA) {
        printf("-");
        i++;
    }
    //Lettre E
    i = 0;
    printf("\nLe nombre de lettre E est de : %d \n",dCountE);
    while (i < dCountE) {
        printf("-");
        i++;
    }
    //Lettre Y
    i=0;
    printf("\nLe nombre de lettre Y est de : %d \n",dCountY);
    while (i < dCountY) {
        printf("-");
        i++;
    }
    //Lettre U
    i=0;
    printf("\nLe nombre de lettre U est de : %d \n",dCountU);
    while (i < dCountU) {
        printf("-");
        i++;
    }
    //Lettre I
    i=0;
    printf("\nLe nombre de lettre I est de : %d \n",dCountI);
    while (i < dCountI) {
        printf("-");
        i++;
    }
    //Lettre O
    i=0;
    printf("\nLe nombre de lettre O est de : %d \n",dCountO);
    while (i < dCountO) {
        printf("-");
        i++;
    }
    
    return;
}

        
//Variables fConvertMajMin

char cLetter;

void fConvertMajMin(void){
    printf("Convertisseur de lettre \n");
    
    //init getchar
    printf("Veuillez taper une lettre \n");
    cLetter = getchar();
    
    //lecture getchar
    cLetter = getchar();
    
    //condition minuscule
        if (cLetter >= 'a' && cLetter <= 'z') {
            cLetter = cLetter - 32;
            printf("La conversion est : %c\n",cLetter);
            return;
        }
    //condition majuscule
        if (cLetter >= 'A' && cLetter <= 'Z') {
            cLetter = cLetter + 32;
            printf("La conversion est : %c\n",cLetter);
            return;
        }
   // si pas une lettre;
        else {
            printf("La conversion est impossible : %c\n",cLetter);
            return;
        }
}

