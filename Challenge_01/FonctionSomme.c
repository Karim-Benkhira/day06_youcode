#include <stdio.h>

int  FonctiondeSomme(int Number1,int Number2)
{
    return Number1 + Number2;
}

int main()
{
    int Number1,Number2;
    printf("Enter Number 1 : ");
    scanf("%d",&Number1);
    printf("Enter Number 2 : ");
    scanf("%d",&Number2);

    int sum = FonctiondeSomme(Number1,Number2);

    printf("Sum = %d\n",sum);

    return 0;
}
