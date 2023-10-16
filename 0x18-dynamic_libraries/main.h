#ifndef BISKIT_MAIN_H
#define BISKIT_MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Function prototype of operations */
int add(int a, int b);
int subtract(int a, int b);
int mult(int a, int b);
div_t div(int a, int b);
int mod(int a, int b);

/* function prototype of libdynamic files */
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif/* BISKIT_MAIN_H */
