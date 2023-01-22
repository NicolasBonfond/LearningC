//
//  C71122.c
//  LanguageC
//
//  Created by Nicolas Bonfond on 07/11/2022.
//

#include "C71122.h"

//variable C71122

int dLarg;
int dLong;

int dPerim (int dLarg, int dLong) {

        
    return (dLong + dLarg)*2;
    
};

int dAire (int dLarg, int dLong) {

    
    return dLarg * dLong;
};

void fComputePandR(void) {
    //getinfo
    printf("Nous allons calculer le perimetre et l'aire d'une longueur et d'une largeur\n");
    printf("Veuillez choisir de la largeur : \n");
    scanf("%d", &dLarg);
    printf("Veuillez choisir maintenant la longueur: \n");
    scanf("%d", &dLong);
    
    //calcul surface et perim
    printf("Le périmètre est : %d cm et l'aire est de %d cm2 \n", dPerim(dLarg,dLong), dAire(dLarg,dLong));
    
    return;
}
