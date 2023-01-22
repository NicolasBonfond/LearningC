//
//  C281122.c
//  LanguageC
//
//  Created by Nicolas Bonfond on 28/11/2022.
//

#include "C281122.h"

//fonction rotation droite
void rotate_right(int tTab[], int dLength, int dShift) {
    int dTemp;
    
    //boucle sur le nombre de rotation
    for (int i = 0; i < dShift; i++){
        dTemp = tTab[dLength-1];
        
        //boucle du shift vers la droite
        for (int j = dLength -1; j > 0; j--) {
            tTab[j] = tTab[j-1];
        }
        tTab[0] = dTemp;
        
    }
}

//fonction rotation gauche
void rotate_left(int tTab[], int dLength, int dShift) {
    int dTemp;
    
    //boucle sur le nombre de rotation
    for (int i = 0; i < dShift; i++){
        dTemp = tTab[0];
        
        //boucle du shift vers la gaucge
        for (int j = 0; j < dLength - 1; j++) {
            tTab[j] = tTab[j+1];
        }
        tTab[dLength-1] = dTemp;
        
    }
}

//fonction tri des valeurs
void sort_tab(int tTab[], int dLength) {
    
}

//fonction remplissage du tableau
void fill_tab(int tTabXIII[])
{
    
}


void fTabDelDoubles(void){
    //Variable fTabDelDoubles
    int tTabXIII[20];
    
    // acceuil
    printf("Ce programme elimine les doubles dans un tableau\n");
    
    //boucle de remplissage du tableau
    printf("Veuillez renseigner les 20 chiffres du tableau\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d",&tTabXIII[i]);
    }
    
    
    
    
    return;
}


void fTabRot(void){
    // Variable  fTabRot
    int tTabXIV[20];
    int dShift;
    char cChoice;
    
    //acceuil
    printf("Ce programme execute une rotation d'un tableau vers la droite ou la gauche\n");
    
    //boucle de remplissage du tableau
    printf("Veuillez renseigner les 20 chiffres du tableau\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d",&tTabXIV[i]);
    }
    
    printf("Les valeurs du tableau sont : \n");
    for(int i = 0; i < 20; i++) {
        printf("%d ",tTabXIV[i]);
    }
    printf("\n");
    
    //demande du nombre de déplacement de case
    printf("Veuillez choisir le nombre de deplacement\n");
    scanf("%d",&dShift);
    if (dShift > 20) {
        printf("Veuillez choisir un nombre plus petit que 20\n");
    }
    else printf("Vous avez choisi un deplacement de %d cases\n",dShift);
    
    // Boucle do..while.. Demande si deplacement gauche ou droite
    do {
        printf("Deplacement droite ou gauche ? (g/G pour gauche ou d/D pour droite\n");
        scanf("%c",&cChoice);
    }
    while (cChoice != 'g' && cChoice != 'G' && cChoice != 'd' && cChoice != 'G');
    
    //Condition gauche
    if (cChoice == 'g' || cChoice =='G') {
        rotate_left(tTabXIV, 20, dShift);
    }
    // Condition droite
    if (cChoice == 'd' || cChoice == 'D') {
        rotate_right(tTabXIV, 20, dShift);
    }
    
    for(int i = 0; i < 20; i++) {
        printf("%d ",tTabXIV[i]);
        
    }
    printf("\n");
    
    return;
}

