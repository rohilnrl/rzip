#include "data.h"

Freq *addf(char ch, int f)
{
    Freq *temp = (Freq *) malloc(sizeof(Freq));
    temp->c = ch;
    temp->val = f;

    return temp;
}

