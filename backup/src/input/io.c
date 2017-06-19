#include "io.h"

char buffer[MAXSIZE];
unsigned int bufp;

int getch()
{
    return (bufp > 0) ? buffer[--bufp] : read();
}

int ungetch(char c)
{
    buffer[bufp++] = c;
}
