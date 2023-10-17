#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limit.h>
#include <unistd.h>
#include <stdlib.h>


typedef struct format
{
	char *id;
	int (*f)();
} convert_match;
typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


int _printf(const char *format, ...);




#endif
