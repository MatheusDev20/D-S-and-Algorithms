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

Student getStudent(int EnrollmentNumber, float grade)
{
  Student student;
  student.EnrollmentNumber = EnrollmentNumber;
  student.grade = grade;

  return student;
}
int getSize(Node *head)
{
  int size = 0;
  while (head != NULL)
  {
    head = head->next;
    size++;
  }

  return size;
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
void InsertAnyNthPosition(Node *head, Student StudentData, int position)
{

  if (position < 1 || position > getSize(head) + 1)
  {
    printf("Posição | %d | inválida \n", getSize(head));
  }
  Node *temp1 = (Node *)malloc(sizeof(struct Node));
  // L.L starts on 1
  Node *temp2 = head;

  // Loop to get the n-1 element (e.g insert at position 5) returns the 4 element of L.L
  for (int i = 1; i < position - 1; i++)
  {
    temp2 = temp2->next;
  }
  // Node to be inserted at nth position
  temp1->data.EnrollmentNumber = StudentData.EnrollmentNumber;
  temp1->data.grade = StudentData.grade;

  temp1->next = temp2->next;

  temp2->next = temp1;
}

void DeleteNodeNthPosition(Node **head, int position)
{
  Node *temp1 = *head;
  if (position == 1)
  {
    *head = temp1->next;
    free(temp1);
  }
  for (int i = 1; i < position - 1; i++)
  {
    temp1 = temp1->next;
  }
  Node *temp2 = temp1->next; // Node to be deleted
  temp1->next = temp2->next;
  free(temp2);
}

void ReverseListIteration(Node **head)
{
  Node *current, *previous, *next;
  current = *head;
  previous = NULL;

  printf("After get into Reverse Function -> %p \n", current);

  while (current != NULL)
  {
    next = current->next;
    printf("Endereço de memória do segundo Node -> %p \n", next);
    current->next = previous;
    previous = current;
    current = next;
  }
  *head = previous;
}
void PrintList(Node *head)

{
  int i = 1;
  while (head != NULL)
  {
    printf("\n");
    printf("Student %d -> Grade : %.2f ||  ", i, head->data.grade);
    printf("Enrollment Number: %d \n", head->data.EnrollmentNumber);

    head = head->next;
    i++;
  }
  printf("\n");
}

int main()
{
  Node *head = NULL;

  Student firstStudent = getStudent(10, 9.82);

  Student secondStudent = getStudent(11, 5.43);

  Student thirdStudent = getStudent(12, 7.23);

  Student fourthStudent = getStudent(13, 9.32);

  Student fifthStudent = getStudent(14, 2.54);

  head = getNode(&firstStudent);

  head = InsertBegining(head, secondStudent);
  head = InsertBegining(head, thirdStudent);
  head = InsertBegining(head, fourthStudent);

  InsertAnyNthPosition(head, fifthStudent, 3);
  DeleteNodeNthPosition(&head, 4);
  ReverseListIteration(&head);
  PrintList(head);

  return 0;
}
