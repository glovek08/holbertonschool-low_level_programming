#include "main.h"
/**
 * swap_int - swaps the value of two given integers via pointers.
 * @ptrIntA: the first pointer.
 * @ptrIntB: the second pointer.
 * Return: void.
 */
void swap_int(int *ptrIntA, int *ptrIntB)
{
int temp_IntA = *ptrIntA;
*ptrIntA = *ptrIntB;
*ptrIntB = temp_IntA;
return;
}
