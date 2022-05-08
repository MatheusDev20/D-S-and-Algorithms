#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
  int data;
  struct Node *next; // Ponteiro para o próximo Node
} Node;

void InsertAtBegining(int x, Node *head)
{
  Node *temp = (Node *)malloc(sizeof(struct Node)); // Definindo o pointer para o novo node
  temp->data = x;
  temp->next = head;
  head = temp; // Adicionando o nonde na LinkedList, temp carrega o endereço de memória do Node
};

void Print(Node *head)
{
  printf("List is: ");
  while (head != NULL)
  {
    printf(" %d \n", head->data);
    head = head->next;
  }
}

int main()
{
  Node *head = NULL; // Armazena o primeir endereço da lista
  printf("Lets Create a Linked List, Enter the number of elements \n");

  int i, x, n;
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("Enter the new number \n");
    scanf("%d", &x);
    InsertAtBegining(x, head);
    Print(head);
  };
};