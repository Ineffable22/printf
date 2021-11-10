<img src="https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg" height="150px" width="800px">

# Our printf () function

### Authors
1. Miguel Grillo
2. Miguel Barrera

## Description

The format string is a character string, is composed
of zero or more directives

### Usage 
like the according main.h library version:
```C
int _printf(const char *format, ...);
```

## Format Specifiers

A format specifier follows this prototype: `%type`
The following format specifiers are supported:

### Supported Types

| Type   | Output |
|--------|--------|
| d or i | Signed decimal integer |
| u      | Unsigned decimal integer	|
| b      | Unsigned binary |
| o      | Unsigned octal |
| x      | Unsigned hexadecimal integer (lowercase) |
| X      | Unsigned hexadecimal integer (uppercase) |
| c      | Single character |
| s      | String of characters |
| p      | Pointer address |
| %      | A % followed by another % character will write a single % |

## Examples
