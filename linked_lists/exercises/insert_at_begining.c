#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
  int number;
  struct Node *next; // Ponteiro para o próximo Node
} Node;

void InsertAtEnd(Node **head, int n) {
    Node* newNode = (Node *)malloc(sizeof(struct Node)); // Casting because malloc returns a void pointer
    newNode->number = n;
    newNode->next = NULL;

    if(*head == NULL) {
        printf("?????\n");
        *head = newNode;
        printf("%p", *head);
    }
    else {
        Node* lastNode = *head;
        while(lastNode->next != NULL) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
}

void Print(Node *head)
{
  printf("List is: ");
  while (head != NULL)
  {
    printf(" %d ", head->number);
    head = head->next;
  }

  printf("\n");
}

int main() {
    Node *head = NULL;
    int i, n, x;
    printf("How Much numbers the Linked List should have ? \n \n");
    scanf("%d", &n);

    for(i = 0; i < n; i ++) {
        printf("Enter a number \n");
        scanf("%d", &x);

        InsertAtEnd(&head, x);
    }
     printf("%p", head);
     Print(head);
}