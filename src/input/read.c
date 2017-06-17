#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *fp;
FILE *wp;

void open(char *name)
{
    char *ext = ".rzip";
    char *outname = (char *) malloc(1 + strlen(name)+ strlen(ext));
    strcpy(outname, name);
    strcat(outname, ext);

    fp = fopen(name, "r");
    wp = fopen(outname, "w");
}

char read()
{
    return getc(fp);
}

void write(char c)
{
    putc(c, wp);
}

void close()
{
    fclose(fp);
    fclose(wp);
}
