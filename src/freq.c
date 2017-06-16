typedef struct freq {
    char c;
    unsigned int val;
} Freq;

Freq *addf(char ch, int f)
{
    Freq *temp = (Freq *) malloc(sizeof(Freq));
    temp->c = ch;
    temp->val = f;

    return temp;
}

