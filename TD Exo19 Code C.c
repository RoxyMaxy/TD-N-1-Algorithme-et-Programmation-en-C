//Calcul si deux nombres sont premiers entre eux ou non

/*
Algorithme TD 01 Exo19 Calcul si deux nombres sont premiers entre eux ou non

Variables:  a, b, i, pgcd: entiers

Début
    Afficher("Entrez a: ");
    Lire(a);
    Afficher("Entrez b: ");
    Lire(b);

        //Calcul du PGCD
        Pour(i=1; (i<=a && i<=b); i++)
            Si((a%i==0) && (b%i==0))
                pgcd<-i;
            Fin Si
        Fin Pour
    
    Afficher("PGCD(", a, ",", b, ")=", pgcd);
        //Résultats si PGCd=0 ou non
        Si(pgcd==0)
            Afficher("D'où ", a, " et ", b, "sont premiers entre eux");
        Sinon
            Afficher("Donc ", a, " et ", b, " ne sont pas premiers entre eux");    
        Fin Si    
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

        //Calcul du PGCD
   for(i=1; (i<=a && i<=b); i++)
   {
      if((a%i==0) && (b%i==0))
      {
         pgcd=i;
      }
   }
printf("PGCD(%d, %d)=%d\n", a, b, pgcd);
        //Instructions selon la valeur du PGCD
    if(pgcd==1)
    {
        printf("D'où les nombres %d et %d sont premiers entre eux\n", a, b);
    }
    else  
    {
        printf("Donc %d et %d ne sont pas premiers entre eux\n", a,b);
    }  
return (0);
}
