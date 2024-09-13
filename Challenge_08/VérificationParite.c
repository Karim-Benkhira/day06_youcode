#include <stdio.h>

int PairOrImpair(int Number)
{
    if (Number % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int Number;

    printf("Entrez un nombre entier \n");
    scanf("%d",&Number);

    if (PairOrImpair(Number)) {
        printf("%d : pair.\n", Number);
    } else {
        printf("%d : impair.\n", Number);
    }

    return 0;
    
}