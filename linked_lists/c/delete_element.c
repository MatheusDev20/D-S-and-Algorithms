#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
  int data;
  struct Node *next; // Ponteiro para o próximo Node
} Node;

// Global Head
Node *head;

void InsertAtEnd(int data)
{
  Node *newNode = (Node *)malloc(sizeof(struct Node));

  newNode->data = data;
  newNode->next = NULL;

  // Se a lista tiver vazia, o memory address de newNode ocupa o Head e o node passa a ser o primeiro elemento
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  Node *temp = head;

  // O ultimo elemento da lista possui o ponteiro *next = NULL
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  // temp sai do While sendo o ultimo elemento
  temp->next = newNode;
};

void Delete(int position)
{
  Node *temp1 = head;
  if (position == 1)
  {
    head = temp1->next;
    free(temp1);
    return; // Head aponta para o segundo Node
   
  }
  int i;
  for (i = 1; i < position - 1; i++)
  {
    temp1 = temp1->next;
  }
  // temp1 aponta para o node (position -1)
  struct Node *temp2 = temp1->next; // Node a ser deletado;
  temp1->next = temp2->next;        // Linkando o node da posição -1 com o node da posição + 1
  free(temp2);
};

void Print()
{
  Node *temp = head;
  printf("Value:  %p\n", temp->next);
  while (temp != NULL)
  {
    printf(" %d ", temp->data);
    temp = temp->next;
  }

  printf("\n");
}

int main()
{
  head = NULL;
  InsertAtEnd(2);
  InsertAtEnd(4);
  InsertAtEnd(6);
  InsertAtEnd(5);
  // List: 2,4,6,5
  Print();
  Delete(4);
  int n;
  printf("Enter a position \n");
  scanf("%d", &n);
  Delete(n);
  Print();
};