#pragma once
#include <stdbool.h>

/* allocates space for the stack in the heap */
int* CreateStack(const int max_size, int* current_size);
/* Pushes a value in the stacks (returns true if it was succcesful) */
bool Push(int* stack, const int max_size, int* current_size, int element);
/* Pops the last value inserted in the stack */
int Pop(int* stack, int* current_size);
/* prints all the stack in the std output */
void PrintStack(int* stack, int current_size);