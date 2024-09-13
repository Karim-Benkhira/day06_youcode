#include <stdio.h>

int  FonctiondeMinimum(int Number1,int Number2)
{
    if(Number1 < Number2)
        return Number1;
    else
        return Number2;
}

int main()
{
    int Number1,Number2;
    printf("Enter Number 1 : ");
    scanf("%d",&Number1);
    printf("Enter Number 2 : ");
    scanf("%d",&Number2);

    int Min = FonctiondeMinimum(Number1,Number2);

    printf("Le Minimum = %d\n",Min);

    return 0;
}