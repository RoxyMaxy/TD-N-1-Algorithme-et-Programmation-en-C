//Affichage des diviseurs de n
/*Algorithme TD 01 Exo010 Affichage des diviseurs de n

Variables:  n, i, reste: entiers

Début
   Afficher("Entrez n: ");
   Lire(n);
   *i est diviseur de n si le reste est égal à 0* 
    Pour(i=1; i<=n; i++)
    reste<-n%i;
       Si(reste==0)
            Afficher(i);
       Fin Si 
    Fin Pour

Fin
*/

#include<stdio.h>

int main()
{
int n, i, reste;
printf("Entrez n: ");
scanf("%d", &n);
printf("Les diviseurs de %d sont: ", n);     
    for(i=1; i<=n; i++)
    {
       reste=n%i;
       if(reste==0)
       {
          printf("%d, ", i);
       }
    }
printf("\n");      
return (0);
}
