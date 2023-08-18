#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
  int data;
  struct Node *next; // Ponteiro para o próximo Node
} Node;

Node *InsertAtBegining(int x, Node *head)
{
  Node *temp = (Node *)malloc(sizeof(struct Node)); // Definindo o pointer para o novo node
  temp->data = x;
  temp->next = NULL;

  if (head != NULL)
  {
    printf("Head is already different from NULL \n");
    temp->next = head; //   O que estava no Head anteriormente precisa ser o next do primeiro elemento
                       // Caso a lista não esteja vazia
  };

  head = temp; // Adicionando o node na LinkedList, temp carrega o endereço de memória do Node

  return head;
};
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

int main()
{
  Node *head = NULL; // Armazena o primeiro endereço da lista
  // int a = 3;
  // int *pt_a = &a; 
  printf("Lets Create a Linked List, Enter the number of elements \n");

  int i, x, n;
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("Enter the new number \n");
    scanf("%d", &x);
    printf("%p\n", head);
    head = InsertAtBegining(x, head);
    Print(head);
  };
};