#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *createListOfNumbers() {
    Node *head;
    Node *current;
    int num;

    printf("Please enter a number or -1 to finish\n");
    scanf("%d", &num);

    if(num == -1)
        return NULL;

      head = (Node*)malloc(sizeof(Node));
      current = head;
      current->data = num;
      current->next = NULL;

    printf("Please enter a number or -1 to finish\n");
    scanf("%d", &num);

    while(num != -1) {
        //printf("NUM: %d\n", num);
        current->next = (Node*)malloc(sizeof(Node));
        current = current->next;
        current->data = num;

        printf("Please enter a number or -1 to finish\n");
        scanf("%d", &num);
   }

    current->next = NULL;
    printf("Return Node\n");
    return head;
}
int main() {

    Node* node = createListOfNumbers();

    while(node != NULL) {
        printf("Node: %d\n", node->data);
        node = node->next;
    }

    return 0;
}
