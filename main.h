#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * struct case_match - Stores a flag and the function
 * pointer associated with it
 * @c: Pointer to the flag
 * @f: Pointer to function
 *
 * Description: Longer description
 */
typedef struct case_match
{
