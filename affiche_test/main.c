#include <stdio.h>
#include <stdlib.h>
int la_somme(int a, int b);
int main()
{
    int nombre_1,nombre_2;
    printf(" BONJOUR LES ZOZOS COMMENT VOUS ALLEZ!\n");
    printf("entrer le premier nombre : ");
    scanf("%d",&nombre_1);
    printf("entrer le deuxieme nombre : ");
    scanf("%d",&nombre_2);
    printf(" la somme est : %d",la_somme(nombre_1,nombre_2));
    return 0;
}
int la_somme(int a, int b)
    {
        return a+b;
    }
