#include <stdio.h>
#include <string.h>

void FonctionInversiondeChaîne(char* chaine)
{
    int L = strlen(chaine);

    for (int i = 0; i < L / 2; i++)
    {
        char swap;

        swap = chaine[i];
        chaine[i] = chaine[L - i - 1];
        chaine[L - i - 1] = swap;
    }
    
}

int main()
{
    char chaine[100];

    printf("Entrez une chaîne de caractères : ");
    fgets(chaine,100,stdin);

    FonctionInversiondeChaîne(chaine);

    printf("%s\n",chaine);

    return 0;
}