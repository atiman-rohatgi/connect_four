#ifndef SLIST_H
#define SLIST_H

typedef struct Node {
    int move;
    char coin;
    struct Node* next;
} Node;

void insertNode(Node** head, int move);
void freeList(Node* head);

#endif // SLIST_H