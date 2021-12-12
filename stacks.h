#include <stdbool.h>

int* CreateStack(const int max_size, int* current_size);
bool Push(int* stack, const int max_size, int* current_size, int element);
int Pop(int* stack, int* current_size);
void PrintStack(int* stack, int current_size);