#ifndef _FACTORS_H_
#define _FACTORS_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define _GNU_SOURCE
/* size_t getline(char **lineptr, size_t *n, FILE *stream); */
int factorize(char *buffer);
#endif /* _FACTORS_H_ */
