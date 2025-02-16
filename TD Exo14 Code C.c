//Affichage du résultat de 1/1+1/2+1/3+...+1/n
/*
Algorithme TD 01 Exo14 Affichage du résultat de 1/1+1/2+1/3+...+1/n

Variables:  n, i, somme: entiers

Début
    Afficher("Entrez n: ");
    Lire(n);
    somme<-0;
        Pour(i=1; i<=n; i++)
            somme<-somme+(1/i);
            Afficher("La somme des inverses des nombres de 1 à ", n, " est ", " %d", somme);
        Fin Pour
Fin
*/

#include<stdio.h>

int main()
{
int n, i;
float somme;
printf("Entrez n: ");
scanf("%d", &n);
somme=0;  
   for(i=1; i<=n; i++)
   {
      somme=somme+(float)(1/i);
   }
printf("La somme des inverses des nombres de 1 à %d est %f\n", n, somme);
return (0);
}
