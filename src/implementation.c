#include "definition.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Il est important de faire l'implementation de vos fonctions dans un fichier .c
// Si vous le faites dans le fichier "header", chaque fichier qui l'include va compiler l`implementation
// et cela causeras des definitions de symboles multiples.

void* allocate(size_t size) {};

void Add_Item(Node* currNode, void* newData)
{
	Node* n = (Node*)allocate(sizeof (Node));
	n->data = newData;
	n->prev = NULL;
	n->next = NULL;
	if (currNode->next != NULL) {
		n->next = currNode->next;
		currNode->next->prev = n;
	}
	currNode->next = n;
	n->prev = currNode;
}

void Remove_Item(Node* head, int value)
{
	Node* currNode = head;

	if (head == NULL) {
		return;
	}
	//Parcour de la liste
	while (currNode != NULL) {
		if (currNode->data == value) {
			if (currNode->prev == NULL) {
				head = currNode->next;
				if (head != NULL) {
					head->prev = NULL;
				}
			}
		}
		else if (currNode->next == NULL) {
			currNode->prev->next = NULL;
		}
		else {
			currNode->prev->next = currNode->next;
			currNode->next->prev = currNode->prev;
		}
		free(currNode);
		return;
	}
	currNode = currNode->next;
}

void Sort_Inventory(int value, Node* left, Node* right)
{
	
}

Node* Find_By_Position(Node* head, int position)
{
	printf("Quelle position veux-tu rechercher?\n");
	scanf("%d", &position);

	Node* temp = head->prev;
	while ((int)temp->data != position) {
		temp = temp->next;
		if (temp == head->prev) {
			temp = NULL;
			break;
		}
	}
	return temp;
}

Node* Find_By_Name(Node* head, char name)
{
	printf("Quelle nom veux-tu rechercher?\n");
	scanf("%s", &name);

	Node* temp = head->prev;
	while ((int)temp->data != name) {
		temp = temp->next;
		if (temp == head->prev) {
			temp = NULL;
			break;
		}
	}
	return temp;
}

void See_Items_Quantity(int quantiter) 
{
	printf("Le nombre d'item est de %d\n", quantiter);
}

void Add_Random_Item() 
{
	
}
