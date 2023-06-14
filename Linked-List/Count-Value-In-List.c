#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

int getTotalAppearances(Node *current, int target) {
    int appearances = 0;

    while(current != NULL) {
        if(current->data == target) {
            appearances++;
        }
        current = current->next;
    }
    return appearances;
}

int main() {

    int target;
    int appearances;
    Node *head = (Node*)malloc(sizeof(Node));
    head->data = 1;

    Node *node1 = (Node*)malloc(sizeof(Node));
    node1->data = 2;
    head->next = node1;
    node1->next = NULL;

    Node *node2 = (Node*)malloc(sizeof(Node));
    node2->data = 3;

    Node *node3 = (Node*)malloc(sizeof(Node));
    node3->data = 4;

    Node *node4 = (Node*)malloc(sizeof(Node));
    node4->data = 1;

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    printf("Enter a search target: ");
    scanf("%d", &target);

    appearances = getTotalAppearances(head, target);
    printf("There were %d appearances of %d.\n", appearances, target);

    return 0;
}
