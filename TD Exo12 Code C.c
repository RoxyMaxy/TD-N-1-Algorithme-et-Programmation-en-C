//Affichage de la somme de 1+2+3+..+n

/*
Algorithme TD 01 Exo12 Calcul et affichage du résultat de 1+2+3+..+n

Variables:  n, i, somme: entiers

Début
    Afficher("Entrez n: ");
    Lire(n);
    somme<-0;
        Pour(i=1; i<=n; i++)
            somme<-somme+i;
            Afficher("La somme des nombres de 1 à ", n, " est ", somme);
        Fin Pour
Fin
*/

#include<stdio.h>

int main()
{
int n, i, somme;
printf("Entrez n: ");
scanf("%d", &n);
somme=0;  
   for(i=1; i<=n; i++)
   {
      somme=somme+i;
   }
     printf("La somme des nombres de 1 à %d est %d\n", n, somme);
return (0);
}
