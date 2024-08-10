#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
va_list args;
int count = 0;
const char *p;

va_start(args, forms);

for (p = format; *p; p++)
{
if (*p == '%')
{
p++;
if (*p == 'c')
{
char c = va_arg(args, int); /* 'char' is promoted to 'int' */
putchar(c);
count++;
}
}
else if (*p == '%')
{
putchar('%');
count++;
}
else
{
putchar(*p);
count++;
}
}
va_end(args);
{
return (count);
}
}
