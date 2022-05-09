#include <iostream>
using namespace std;
#include <bits/stdc++.h>

struct Node
{
  int data;
  struct Node *next;
};

int size = 0;

Node *getNode(int data)
{
  // Allocating
  Node *newNode = new Node();

  // Inserting

  newNode->data = data;
  newNode->next = nullptr;

  return newNode;
}

void insertPos(Node **current, int pos, int data)
{
  if (pos < 1 || pos > size + 1)
  {
    cout << "Invalid Position" << endl;
  }
  else
  {
    while (pos--)
    {
      if (pos == 0)
      {
        Node *temp = getNode(data);

        temp->next = *current;

        *current = temp;
      }

      else
      {
        current = &(*current)->next;
      }
      size++;
    }
  };
};

// This function prints contents
// of the linked list
void printList(struct Node* head)
{
    while (head != NULL) {
        cout << " " << head->data;
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // Creating the list 3->5->8->10
    Node* head = NULL;
    head = getNode(3);
    head->next = getNode(5);
    head->next->next = getNode(8);
    head->next->next->next = getNode(10);
 
    size = 4;
 
    cout << "Linked list before insertion: ";
    printList(head);
 
    int data = 12, pos = 3;
    insertPos(&head, pos, data);
    cout << "Linked list after insertion of 12 at position 3: ";
    printList(head);
 
    // front of the linked list
    data = 1, pos = 1;
    insertPos(&head, pos, data);
    cout << "Linked list after insertion of 1 at position 1: ";
    printList(head);
 
    // insertion at end of the linked list
    data = 15, pos = 7;
    insertPos(&head, pos, data);
    cout << "Linked list after insertion of 15 at position 7: ";
    printList(head);
 
    return 0;
}