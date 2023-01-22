//
//  main.c
//  LanguageC
//
//  Created by Nicolas Bonfond on 07/11/2022.
//

#include <stdio.h>
#include "C71122.h"
#include "C141122.h"
#include "C281122.h"

int main(int argc, const char * argv[]) {
    
    int dChoice = 0;
    
    printf("Bienvennue sur le cours de language C - Niveau 1 \n");
    
    printf("1. Cours du 07 Novembre 2022 - Exercice 01 (perimetre et aire) \n");
    printf("2. Cours du 14 Novembre 2022 - Exercice 09 (Compteur de voyelle) \n");
    printf("3. Cours du 14 Novembre 2022 - Exercice 10 (Conversion majuscule / minuscule) \n");
    printf("4. Cours du 28 Novembre 2022 - Exercice 13 (Suppression des doublons d'un tableau) \n");
    printf("5. Cours du 28 Novembre 2022 - Exercice 14 (Rotation tableau) \n");
    printf("\n");
    
    
    printf("Veuillez choisir l'exercice que vous voulez executer : \n");
    scanf("%d",&dChoice);
    
    switch (dChoice) {
        case 1:
            fComputePandR();
            break;
            
        case 2:
            fGetVoyelles();
            break;
            
        case 3:
            fConvertMajMin();
            break;
            
        case 4:
            fTabDelDoubles();
            break;
        case 5:
            fTabRot();
            break;
    }

    
    return 0;
}
