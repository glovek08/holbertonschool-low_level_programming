#include "main.h"
/**
 *
 *
 *
 */
void swap_int(int *ptrIntA, int *ptrIntB)
{
    int temp_IntA = *ptrIntA;
    *ptrIntA = *ptrIntB;
    *ptrIntB = temp_IntA;
    return;
}
