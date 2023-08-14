#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
  char value;
  int priority;
  double number;
  struct Stack *next;
} Stack;

Stack *createStack();
void deleteStack(Stack **head);
void push(Stack **head);
void pop(Stack **head);
void printLinkedList(const Stack *head);