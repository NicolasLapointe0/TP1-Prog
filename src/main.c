#include <stdio.h>
#include "definition.h"


int main(int argc, char** argv){
    printf("Bienvenue dans l'iventaire !\n");
    printf("Que veux-tu faire?\n");
    printf("1 : Ajouter un item\n");
    printf("2 : Enlever un item\n");
    printf("3 : trier l'iventaire\n");
    printf("4 : Trouver un item par sa position\n");
    printf("5 : Trouver un item par son nom\n");
    printf("6 : Voir la quantite d'items\n");
    printf("7 : Ajouter un item aleatoirement\n");

    int quantiter = 0;
    int Choix = 0; 
    char name;
    int position = 0;
    int item = 0;
    

    scanf("%d", &Choix);  

    if (Choix == 1) {
        Add_Item(item, position);
    }
   
    if (Choix == 2) {
        Remove_Item(item, position);
    }

   /* if (Choix == 3) {
        Sort_Inventory();
    }*/

    if (Choix == 4) {
        Find_By_Position(,position);
    }

    if (Choix == 5) {
        Find_By_Name(, name);
    }

    if (Choix == 6) {
        See_Items_Quantity(quantiter);
    }

    if (Choix == 7) {
        Add_Random_Item();
    }

   
    return 0;
}
