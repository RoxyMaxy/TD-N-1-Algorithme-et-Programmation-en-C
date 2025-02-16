//Affichage du résultat de 1*2*3*...*n
/*
Algorithme TD 01 Exo13 Affichage du résultat de 1*2*3*...*n

Variables:  n, i, produit: entiers

Début
    Afficher("Entrez n: ");
    Lire(n);
    produit<-0;
        Pour(i=1; i<=n; i++)
            produit<-produit*i;
            Afficher("Le produit des nombres de 1 à ", n, " est ", " %d", produit);
        Fin Pour
Fin
*/

#include<stdio.h>

int main()
{
int n, i, produit;
printf("Entrez n: ");
scanf("%d", &n);
produit=1;  
   for(i=1; i<=n; i++)
   {
      produit=produit*i;
   }
      printf("Le produit des nombres de 1 à %d est %d\n", n, produit);
return (0);
}
