//Affichage du résultat de 1!+2!+3!+...+n!

/*
Algorithme TD 01 Exo16 Affichage du résultat de 1!+2!+3!+...+n!

Variables:  n, i, factoriel, somme: entiers

Début
Afficher("Entrez n: ");
Lire(n);
somme<-0;
factoriel<-1  
   Pour(i=1; i<=n; i++)
      Pour(j=1; j<=i; j++)
         factoriel<-factoriel*j;
      Fin Pour
         somme<-somme+factoriel;
         Afficher("La somme des factoriels de 1 à ", n, " est ", somme);
   Fin Pour
Fin
*/

#include<stdio.h>

int main()
{
int n, i, j, factoriel, somme;
printf("Entrez n: ");
scanf("%d", &n);
somme=1;
factoriel=1;

if(n==0)
{
   printf("Le factoriel de 0 est 1\n");
}
else
{
      for(i=1; i<n; i++)
      {
         factoriel=factoriel*(i+1);
         somme=somme+factoriel;
      }
   printf("La somme des factoriels de 1 à %d est %d\n", n, somme); 
}

return (0);
}
