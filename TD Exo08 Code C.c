//Affichage des nombres de 1 à n
/*Algorithme TD 01 Exo08 Maximum de deux nombres

Variables:  n, i: entiers

Début
Afficher("Entrez n: ");
Lire(n);
    
    Pour(i=1; i<=n; i++)
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

    for(i=1; i<=n; i++)
    {
        printf("%d, ", i);
    }
printf("\n");
return (0);
}
