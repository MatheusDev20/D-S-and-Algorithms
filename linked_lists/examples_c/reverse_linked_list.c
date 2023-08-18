#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
  int data;
  struct Node *next; // Ponteiro para o próximo Node
} Node;

struct Node *head;
void Reverse()
{
  Node *next;
  Node *prev = NULL;
  Node *current;
  // [1,2,3]
  // [3,2,1]
  current = head;
  while (current != NULL)
  {
    next = current->next; // Pegando endereço de memória do proximo Node
    current->next = prev; // Endereço de memoria do Node atual vai ser o anterior;
    prev = current;
    current = next;
  }
  head = prev; // o que era antes o ultimo Node passa a ser o primeiro
}
void Print(Node *head)
{
  printf("List is: ");
  while (head != NULL)
  {
    printf(" %d ", head->data);
    head = head->next;
  }

  printf("\n");
}

int main(){

};