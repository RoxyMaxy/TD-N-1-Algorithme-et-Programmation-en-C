//Affichage du résultat de 1/1!+1/2!+1/3!+...+1/n!

/*
Algorithme TD 01 Exo17 Affichage du résultat de 1/11!+1/2!+1/3!+...+1/n!

Variables:  n, i, factoriel, somme: entiers

Début
    Afficher("Entrez n: ");
    Lire(n);
    somme<-0;  
    factoriel<-1;
    Pour(i=1; i<=n; i++)
        Pour(j=1; j<=i; j++)
            factoriel<-factoriel*(1/j);
        Fin Pour
            somme<-somme+factoriel;
            Afficher("La somme des factoriels de 1 à ", n, " est ", somme);
    Fin Pour
Fin
*/

#include <stdio.h>

int main() 
{
    int n, i, j;
    double factoriel, somme;
    printf("Entrez n: ");
    scanf("%d", &n);
    somme=0.00000;
    for (i=1; i<=n; i++) 
    {
        factoriel=1.0000;
        for (j=1; j<=i; j++) 
        {
            factoriel*=(double)j;
        }
        somme+=1.0000/factoriel; 
    }
    printf("La somme de 1/1! + 1/2! + ... + 1/%d! est %lf\n", n, somme);
    return (0);
}
