//Affichage des nombres pairs de 1 à n
/*
Algorithme TD 01 Exo09 Affichage des nombres pairs entre 1 et n

Variables:  n, i: entiers

Début
Afficher("Entrez n: ");
Lire(n);
    
    Pour(i=0; i<=n; i+=2)
        Afficher(i);
    Fin Pour

Fin
*/

#include<stdio.h>

int main()
{
int n, i;
printf("Entrez n: ");
scanf("%d", &n);

    for(i=0; i<=n; i+=2)
    {
        printf("%d, ", i);
    }
printf("\n");
return (0);
}
