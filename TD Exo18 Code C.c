//Calcul du PGCD de deux nombres

/*
Algorithme TD 01 Exo18 Affichage du PGCD de deux nombres

Variables:  a, b, i, pgcd: entiers

Début
    Afficher("Entrez a: ");
    Lire(a);
    Afficher("Entrez b: ");
    Lire(b);

    Pour(i=1; (i<=a && i<=b); i++)
        Si((a%i==0) && (b%i==0))
            pgcd<-i;
        Fin Si
    Fin Pour
    Afficher("PGCD(", a, ",", b, ")=", pgcd);    
Fin
*/

#include<stdio.h>

int main()
{
int a, b, i, pgcd;
printf("Entrez a: ");
scanf("%d", &a);
printf("Entrez b: ");
scanf("%d", &b);

   for(i=1; (i<=a && i<=b); i++)
   {
      if((a%i==0) && (b%i==0))
      {
         pgcd=i;
      }
   }
printf("PGCD(%d, %d)=%d\n", a, b, pgcd);    
return (0);
}
