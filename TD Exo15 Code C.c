//Affichage du résultat de 1+10¹+10²+10³+...+10^n 

/*
Algorithme TD 01 Exo15 Affichage du résultat de 1+10¹+10²+10³+...+10^n

Variables:  n, i, somme: entiers

Début
    Afficher("Entrez n: ");
    Lire(n);
    somme<-1;
        Pour(i=1; i<=n; i++)
            somme<-somme+(pow(10, i));
            Afficher("La somme de 10^0 à 10^", n, " est ", " %d", somme);
        Fin Pour
Fin
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, somme = 0;
    printf("Entrez n: ");
    scanf("%d", &n);
    
    for (i=0; i<=n; i++) 
    {
      somme += (int)pow(10, i);
    }
    
    printf("La somme des nombres de 10^0 à 10^%d est %d\n", n, somme);

    return (0);
}
