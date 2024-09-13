#include <stdio.h>

int FonctiondeMaximum(int Number1,int Number2)
{
    if(Number1 > Number2)
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

    int Max = FonctiondeMaximum(Number1,Number2);

    printf("Le maximum = %d\n",Max);

    return 0;
}