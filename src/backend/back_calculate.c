#include "back_calculate.h"

int polish_notac(const char *str, char *out, int status, double x) {
  char valid_str[255] = "";
  char in_str[255] = "";
  strcpy(in_str, str);
  int exep = validate(in_str, valid_str);
  char postfix[1000] = "";
  double value = 0;
  if (exep == 0 && !status) {
    parser(valid_str, postfix, &exep, x);
    value = calculate(postfix, &exep);
    sprintf(out, "%lf", value);
  } else if (exep == 1) {
    sprintf(out, "%s", "Введите данные");
  } else if (exep == 2) {
    sprintf(out, "%s", "Внимательнее со скобками");
  } else if (exep == 3 && !status) {
  }
  if (exep == 4) {
    sprintf(out, "%s", "Внимательнее ошибка ввода");
    ;
  } else if (exep == 3 && status) {
    parser(valid_str, postfix, &exep, x);
    value = calculate(postfix, &exep);
    sprintf(out, "%lf", value);
  }
  return exep;
}

int validate(char *str, char *valid_str) {
  char *tmp = str;
  int result = 0, cnt_1 = 0, cnt_2 = 0, cnt_sign = 0, cnt = 0;
  if (strlen(str) == 0) result = 1;
  while (tmp && *tmp != '\0' && (result == 0 || result == 3)) {
    if (*tmp == '(') {
      strcat(valid_str, "(");
      cnt_1++;
    } else if (*tmp == ')') {
      strcat(valid_str, ")");
      cnt_2++;
    } else if (*tmp == 'x' || *tmp == 'X') {
      result = 3;
      strcat(valid_str, "x");
    } else if (*tmp == 'c') {
      cnt_sign = memcmp(tmp, "cos", 3);
      if (cnt_sign != 0) {
        result = 4;
      } else {
        strcat(valid_str, "c");
        tmp += 2;
      }
    } else if (*tmp == 's') {
      cnt_sign = memcmp(tmp, "sin", 3);
      if (cnt_sign != 0) {
        result = 4;
      } else {
        strcat(valid_str, "s");
        tmp += 2;
      }
      cnt_sign = memcmp(tmp, "sqrt", 4);
      if (cnt_sign != 0 && result != 0) {
        result = 4;
      } else if (cnt_sign == 0 && result != 0) {
        strcat(valid_str, "q");
        tmp += 3;
        result = 0;
      }
    } else if (*tmp == 't') {
      cnt_sign = memcmp(tmp, "tan", 3);
      if (cnt_sign != 0) {
        result = 4;
      } else {
        strcat(valid_str, "t");
        tmp += 2;
      }
    } else if (*tmp == 'a') {
      cnt_sign = memcmp(tmp, "asin", 4);
      if (cnt_sign != 0) {
        result = 4;
      } else {
        strcat(valid_str, "S");
        tmp += 3;
      }
      cnt_sign = memcmp(tmp, "acos", 4);
      if (cnt_sign != 0 && result != 0) {
        result = 4;
      } else if (cnt_sign == 0 && result != 0) {
        strcat(valid_str, "C");
        tmp += 3;
        result = 0;
      }
      cnt_sign = memcmp(tmp, "atan", 4);
      if (cnt_sign != 0 && result != 0) {
        result = 4;
      } else if (cnt_sign == 0 && result != 0) {
        strcat(valid_str, "T");
        result = 0;
        tmp += 3;
      }
    } else if (*tmp == 'l') {
      cnt_sign = memcmp(tmp, "ln", 2);
      if (cnt_sign != 0) {
        result = 4;
      } else {
        strcat(valid_str, "l");
        tmp++;
      }
      cnt_sign = memcmp(tmp, "log", 3);
      if (cnt_sign != 0 && result != 0) {
        result = 4;
      } else if (cnt_sign == 0 && result != 0) {
        strcat(valid_str, "L");
        tmp += 2;
        result = 0;
      }
    } else if (*tmp == '-' &&
               (cnt == 0 || *(tmp - 1) == '(' || *(tmp - 1) == '+' ||
                *(tmp - 1) == '-' || *(tmp - 1) == '*' || *(tmp - 1) == '/' ||
                *(tmp - 1) == '^')) {
      strcat(valid_str, "~");
    } else if (*tmp == '+' &&
               (cnt == 0 || *(tmp - 1) == '(' || *(tmp - 1) == '+' ||
                *(tmp - 1) == '-' || *(tmp - 1) == '*' || *(tmp - 1) == '/' ||
                *(tmp - 1) == '^')) {
    } else {
      strncat(valid_str, tmp, 1);
    }
    tmp++;
    if (cnt_2 > cnt_1) {
      result = 2;
    }
    cnt++;
  }
  if (cnt_1 != cnt_2) result = 2;
  return result;
}

void parser(char *str, char *new_str, int *exep, double x) {
  Stack *list_c = NULL;
  char sign;
  double num;
  int priority = 0;
  char ch[3];
  while (*str && priority >= 0 && *exep != 4) {
    if (*str >= '0' && *str <= '9') {
      pars_num(&str, &num);
      char buf[100];
      sprintf(buf, "%lf ", num);
      strcat(new_str, buf);
    } else if (*str == 'x') {
      char buf[100];
      if (x < 0) {
        sprintf(buf, "%lf ~", -x);
      } else {
        sprintf(buf, "%lf ", x);
      }
      strcat(new_str, buf);
    } else {
      priority = parse_sign(str, &sign, exep);
      if (list_c == NULL) {
        list_c = createStack();
        list_c->value = sign;
        list_c->priority = priority;
      } else {
        check_pririty(&list_c, &new_str, priority, sign);
      }
    }
    str++;
  }
  //	Заносим все оставшиеся операторы из стека в выходную строку
  while (list_c && *exep != 4) {
    if (list_c->value == '(' && priority < 0) *exep = 2;
    ch[0] = list_c->value;
    ch[1] = ' ';
    ch[2] = '\0';
    strcat(new_str, ch);
    pop(&list_c);
  }
  deleteStack(&list_c);
}

double calculate(char *str, int *exep) {
  Stack *list_number = NULL;
  double num = 0;
  while (str && *str != '\0' && *exep != 4) {
    if (*str >= '0' && *str <= '9') {
      pars_num(&str, &num);
      if (!list_number) {
        list_number = createStack();
        list_number->number = num;
      } else {
        push(&list_number);
        list_number->number = num;
      }
    } else if (*str == '~') {
      if (list_number) {
        list_number->number *= -1;
      } else {
        *exep = 4;
      }
    } else {
      execute(*str, &list_number, exep);
    }
    str++;
  }
  if (list_number) {
    num = list_number->number;
  }
  deleteStack(&list_number);
  return num;
}

void execute(char ch, Stack **list_number, int *exep) {
  double first = 0;
  if (ch == 'c') {
    if (*list_number)
      (*list_number)->number = cos((*list_number)->number);
    else
      *exep = 4;
  } else if (ch == 's') {
    if (*list_number)
      (*list_number)->number = sin((*list_number)->number);
    else
      *exep = 4;
  } else if (ch == 't') {
    if (*list_number)
      (*list_number)->number = tan((*list_number)->number);
    else
      *exep = 4;
  } else if (ch == 'C') {
    if (*list_number)
      (*list_number)->number = acos((*list_number)->number);
    else
      *exep = 4;
  } else if (ch == 'S') {
    if (*list_number)
      (*list_number)->number = asin((*list_number)->number);
    else
      *exep = 4;
  } else if (ch == 'T') {
    if (*list_number)
      (*list_number)->number = atan((*list_number)->number);
    else
      *exep = 4;
  } else if (ch == 'l') {
    if (*list_number)
      (*list_number)->number = log((*list_number)->number);
    else
      *exep = 4;
  } else if (ch == 'L') {
    if (*list_number)
      (*list_number)->number = log10((*list_number)->number);
    else
      *exep = 4;
  } else if (ch == 'q') {
    if (*list_number)
      (*list_number)->number = sqrt((*list_number)->number);
    else
      *exep = 4;
  } else if (ch == '+') {
    if (*list_number) {
      first = (*list_number)->number;
      pop(list_number);
      if (*list_number) {
        (*list_number)->number += first;
      } else {
        *exep = 4;
      }
    } else
      *exep = 4;
  } else if (ch == '-') {
    if (*list_number) {
      first = (*list_number)->number;
      pop(list_number);
      if (*list_number) {
        (*list_number)->number -= first;
      } else {
        *exep = 4;
      }
    } else
      *exep = 4;
  } else if (ch == '*') {
    if (*list_number) {
      first = (*list_number)->number;
      pop(list_number);
      if (*list_number) {
        (*list_number)->number *= first;
      } else {
        *exep = 4;
      }
    } else
      *exep = 4;
  } else if (ch == '/') {
    if (*list_number) {
      first = (*list_number)->number;
      pop(list_number);
      if (*list_number) {
        (*list_number)->number /= first;
      } else {
        *exep = 4;
      }
    } else
      *exep = 4;
  } else if (ch == '%') {
    if (*list_number) {
      first = (*list_number)->number;
      pop(list_number);
      if (list_number) {
        (*list_number)->number = fmod((*list_number)->number, first);
      } else {
        *exep = 4;
      }
    } else
      *exep = 4;
  } else if (ch == '^') {
    if (*list_number) {
      first = (*list_number)->number;
      pop(list_number);
      if (*list_number) {
        (*list_number)->number = pow((*list_number)->number, first);
      } else {
        *exep = 4;
      }
    } else
      *exep = 4;
  } else if (ch == ' ') {
  } else {
    *exep = 4;
  }
}

void check_pririty(Stack **list_c, char **new_str, int priority, char sign) {
  char ch[3];
  if (priority == 0) {
    push(list_c);
    (*list_c)->value = sign;
    (*list_c)->priority = priority;
  } else if (priority == 5) {
    int priority_in = 0;
    do {
      priority_in = (*list_c)->priority;
      if ((*list_c)->value != '(') {
        ch[0] = (*list_c)->value;
        ch[1] = ' ';
        ch[2] = '\0';
        strcat(*new_str, ch);
        pop(list_c);
      }
    } while ((*list_c) && priority_in != 0 && (*list_c)->value != '(');
    if ((*list_c) && (*list_c)->value == '(') pop(list_c);
    if ((*list_c) && (*list_c)->priority == 0 && (*list_c)->value != '(') {
      ch[0] = (*list_c)->value;
      ch[1] = ' ';
      ch[2] = '\0';
      strcat(*new_str, ch);
      pop(list_c);
    }
  } else {
    do {
      if ((*list_c)->priority >= priority) {
        ch[0] = (*list_c)->value;
        ch[1] = ' ';
        ch[2] = '\0';
        strcat(*new_str, ch);
        pop(list_c);
      }
    } while ((*list_c) && (*list_c)->priority >= priority);
    push(list_c);
    (*list_c)->value = sign;
    (*list_c)->priority = priority;
  }
}

void pars_num(char **str, double *num) {
  int n = 0;
  sscanf(*str, "%lf%n", num, &n);
  *str = *str + n - 1;
}

int parse_sign(char *str, char *sign, int *exep) {
  int priority = 0;
  *sign = *str;
  switch (*str) {
    case 'c':
    case 's':
    case 't':
    case 'C':
    case 'S':
    case 'T':
    case 'l':
    case 'L':
    case 'q':
    case '(':
      priority = 0;
      break;
    case '+':
    case '-':
      priority = 1;
      break;
    case '*':
    case '/':
    case '%':
      priority = 2;
      break;
    case '^':
      priority = 3;
      break;
    case '~':
      priority = 4;
      break;
    case ')':
      priority = 5;
      break;
    case '.':
      *exep = 4;
      break;
    case ' ':
      break;
    default:
      priority = -1;
      break;
  }
  return priority;
}