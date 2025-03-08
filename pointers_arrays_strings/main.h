#ifndef TEST_H
#define TEST_H

/* void functions */
void reset_to_98(int *);
void swap_int(int *, int*);
void _puts(char *);
void print_rev(char *);
void rev_string(char *);
void puts2(char *);
void puts_half(char *);
void print_array(int *, int);
void reverse_array(int *, int);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

/* int functions */
int _putchar(char);
int _strlen(char *);
int _atoi(char *);
int _strcmp(char *, char *);

/* char* functions */
char *_strcpy(char *, char *);
char *_strcat(char *, char *);
char *_strncat(char *, char *, int);
char *_strncpy(char *, char *, int);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
char *_strpbrk(char *, char *);
char *_strstr(char *, char *);

/* unsigned int functions */
unsigned int _strspn(char *, char *);

#endif
