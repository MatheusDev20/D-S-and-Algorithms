#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
  int data;
  struct Node *next; // Ponteiro para o próximo Node
} Node;

void Insert(int data, int position)
{
  int i;
  Node *temp1 = (Node *)malloc(sizeof(struct Node));
  temp1->data = data;
  temp1->next = NULL;

  if (position == 1) // Se quisermos inserir na primeira posição
  {
    temp1->next = head;
    head = temp1;
    return;
  }

  Node *temp2 = head;
  for (i = 1; i < position - 1; i++)
  {
    temp2 = temp2->next;
  }
};

void Print()
{
  Node* temp = head;
  while (temp != NULL)
  {
    printf(" %d ", temp->data);
    temp = temp->next;
  }

  printf("\n");
}
// Global Head
Node *head; // Armazena o primeiro endereço da lista
int main()
{
  head = NULL; // empty list
  Insert(2,1); // List: 2
  Insert(3,2); // List: 2,3
  Insert(4,1);
  Insert(5,1);
  Print();
};