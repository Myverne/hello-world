#include <stdio.h>

void bg(unsigned i)
{
    for (; i > 0; i--)
    {
        printf("Je suis dans le Google Doc !\n");
    }
}

int main()
{
    unsigned k;
    printf("Combien de fois veux-tu exprimer ta joie ? ");
    scanf("%u", &k);
    bg(k);
}