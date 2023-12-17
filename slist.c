#include <stdio.h>
#include <stdlib.h>
#include "slist.h"

//creating a new node that represent each move
void insertNode(Node** head, int move, char currCoin) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->move = move;
    newNode->coin = currCoin;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
}

//resets the linked list
void freeList(Node* head) {
    Node* current = head;
    Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}
