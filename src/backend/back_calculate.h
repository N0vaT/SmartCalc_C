#ifndef CALCULATE_H
#define CALCULATE_H

#include <math.h>
#include <stdio.h>
#include <string.h>

#include "stack.h"

int polish_notac(const char *str, char *out, int status, double x);
void parser(char *str, char *new_str, int *exep, double x);
void pars_num(char **str, double *num);
int parse_sign(char *str, char *sign, int *exep);
void check_pririty(Stack **list_c, char **new_str, int priority, char sign);
double calculate(char *str, int *exep);
void execute(char ch, Stack **list_number, int *exep);
int validate(char *str, char *valid_str);

#endif  // CALCULATE_H