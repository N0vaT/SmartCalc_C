#include "stack.h"

/// @brief Функция инициализирует Stack
/// @param status - интовое значение 0 - double; 1 - char
/// @param value - значение в стеке
/// @return созданный Stack
Stack *createStack() {
  Stack *head = malloc(sizeof(Stack));
  if (head == NULL) {
  } else {
    head->next = NULL;
  }
  return head;
}

/// @brief Функция удаляет весь Stack
/// @param head - указатель на Stack
void deleteStack(Stack **head) {
  if (head != NULL && *head != NULL) {
    Stack *tmp = NULL;
    while ((*head)->next) {
      tmp = *head;
      *head = (*head)->next;
      free(tmp);
    }
    free(*head);
  }
}

/// @brief Функция добавляет новую ноду
/// @param head - указатель на Stack
/// @param value - значение которое добавляет
void push(Stack **head) {
  Stack *tmp = (Stack *)malloc(sizeof(Stack));
  tmp->next = (*head);
  (*head) = tmp;
}

/// @brief Функция удаляет последнее значение из Stack
/// @param head - указатель на Stack
void pop(Stack **head) {
  Stack *prev = NULL;
  if (head == NULL) {
  } else {
    prev = (*head);
    (*head) = (*head)->next;
    free(prev);
  }
}