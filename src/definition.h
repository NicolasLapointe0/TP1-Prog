// Vous devez ajouter ce #pragma a tous vos fichiers .h de votre projet.
// Il garantit que le fichier "header" n'est inclus qu'une seule fois par compilation,
// ce qui evite les erreurs de redefinition et les conflits de symboles.
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
// Vous devez definir les structures et fonctions que vous voulez exposer dans les "headers"
// Si jamais vous avez des fonctions avec des noms commun, vous devez les prefixer pour eviter des conflits de symboles
// Le prefix peut etre le nom de votre projet, exemple: forhonor_nom_de_fonction


// Lorsqu'une fonction n'a pas de parametre, mettre void entre les parentheses.

typedef struct Items
{
	char name[256];
	int value;
}Items;

typedef struct Node Node;

struct Node
{
	void* data;
	Node* prev;
	Node* next;
};

void* allocate(size_t size);

void Add_Item(Node* currNode, void* newData);

void Remove_Item(Node* head, int value);

void Sort_Inventory(int value, Node*);

Node* Find_By_Position(Node* head, int position);

Node* Find_By_Name(Node* head, char name);

void See_Items_Quantity(int num);

void Add_Random_Item();



