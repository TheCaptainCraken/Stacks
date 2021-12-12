#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* CreateStack(const int max_size, int* current_size) {
    int* new_stack = (int*)malloc(sizeof(int) * max_size);
    if (new_stack == NULL) {
        printf("Allocation error while allocating memory for the stack!");
        return NULL;
    }

    *current_size = 0;
    return new_stack;
}

bool Push(int* stack, const int max_size, int* current_size, int element) {
    if (*current_size == max_size) {
        printf("Max stack size reached!\n");
        return false;
    }

    *(stack + *current_size) = element;
    (*current_size)++;
    return true;
}

int Pop(int* stack, int* current_size) {
    if (*current_size == 0) {
        printf("Popping from an empty stack!\n");
        return -1;
    }

    (*current_size)--;
    return *(stack + *current_size);
}
void PrintStack(int* stack, int current_size) {
    for (int i = current_size - 1; i >= 0; i--) {
        printf("=> %d\n", *(stack + i));
    }
}