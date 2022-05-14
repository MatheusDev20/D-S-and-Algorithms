#include <stdlib.h>
#include <stdio.h>

// Inserir no ínicio
// Deletar em qualquer posição
// Inserir em qualquer posição

// SD04316818

typedef struct Student
{
  int EnrollmentNumber;
  float grade;

} Student;

typedef struct Node
{
  Student data;
  struct Node *next;

} Node;

Node *getNode(Student *student)
{
  Node *newNode = (Node *)malloc(sizeof(struct Node));
  newNode->data.EnrollmentNumber = student->EnrollmentNumber;
  newNode->data.grade = student->grade;

  return newNode;
}

Node *InsertBegining(Node *head, Student StudentData)
{

  Node *newNode = getNode(&StudentData);
  if (head != NULL)
  {
    newNode->next = head;
    head = newNode;
    return head;
  }

  head = newNode;

  return head;
}

void PrintList(Node *head)
{
  while (head != NULL)
  {
    printf("Grade : %2.f \n", head->data.grade);
    printf("Enrollment Number: %d \n", head->data.EnrollmentNumber);

    head = head->next;
  }
  printf("\n");
}
int main()
{
  Node *head = NULL;
  Student newStudent;

  newStudent.EnrollmentNumber = 14;
  newStudent.grade = 9.82;

  Student secondStudent;
  secondStudent.EnrollmentNumber = 13;
  secondStudent.grade = 5.43;

  head = getNode(&newStudent);
  head = InsertBegining(head, secondStudent);

  PrintList(head);
  return 0;
}
