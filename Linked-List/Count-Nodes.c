#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

int getLinkedListSize(Node *current) {

    int count = 0;
    while(current != NULL) {
        printf("Node: %d\n", current->data);
        count++;
        current = current->next;
    }

    return count;
}


int main() {

    Node *head = (Node*)malloc(sizeof(Node));
    head->data = 1;
    Node *tail = (Node*)malloc(sizeof(Node));
    tail->data = 2;
    head->next = tail;
    tail->next = NULL;


    int count = getLinkedListSize(head);

    printf("%d", count);


    return 0;
}
