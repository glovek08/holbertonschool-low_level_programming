#ifndef TEST_H
#define TEST_H

char *create_array(unsigned int, char);
char *_strdup(char *);
char *str_concat(char *, char *);

int **alloc_grid(int, int);

void free_grid(int **grid, int height);

#endif /** TEST_H **/
