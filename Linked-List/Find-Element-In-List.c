#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

bool getNodeExists(Node *current, int target) {

    while(current != NULL) {
        printf("Node: %d\n", current->data);
        if(current->data == target) {
            return true;
        } else {
            current = current->next;
        }
    }
    return false;
}

int main() {
    bool exists = false;
    int target;
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
    node4->data = 5;

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    printf("Enter a search target: ");
    scanf("%d", &target);

    exists = getNodeExists(head, target);
    printf("Node %d exists: ", target);
    if(exists)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
