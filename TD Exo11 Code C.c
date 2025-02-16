//Affichage du factoriel de n
/*
Algorithme TD 01 Exo11 Calcul et affichage du factoriel de n

Variables:  n, i, factoriel: entiers

Début
    Afficher("Entrez n: ");
    Lire(n);
    factoriel<-1;
    Si(n==0)  
        Afficher("Le factoriel de 0 est 1");
    Sinon
        Pour(i=1; i<=n; i++)
            factoriel<-factoriel*i;
            Afficher("Le factoriel de ", n, " est ", factoriel);
        Fin Pour
    Fin Si
Fin
*/

#include<stdio.h>

int main()
{
int n, i, factoriel;
printf("Entrez n: ");
scanf("%d", &n);
factoriel=1;  
if(n==0)  
{
   printf("Le factoriel de 0 est 1");
}
else
{
   for(i=1; i<=n; i++)
   {
      factoriel=factoriel*i;
   }
   printf("Le factoriel de %d est %d\n", n, factoriel);
}
    
return (0);
}
