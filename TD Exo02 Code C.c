//Information si le produit de deux nombres est positif ou négatif
/*Algorithme TD 01 Exo02: signe du produit de deux nombres

Variables: a, b: reels
Début
    Afficher("Entrez le nombre a: ");
    Lire(a);
    Afficher("Entrez le nombre b: ");
    Lire(b);
        Si ((a<0 && b<o) || (a>0 && b>0))
            Afficher("Le produit de %f et %f est négatif");
        Sinon
            Afficher("Le produit de %f et %f est positif");
        Fin Si
Fin
*/
#include<stdio.h>

int main()
{
float a, b, produit;
printf("Entrez le nombre a: ");
scanf("%f", &a);
printf("Entrez le nombre b: ");
scanf("%f", &b);
if ((a<0 && b<0) || (a>0 && b>0))
    {
        printf("Le produit de %f et %f est positif\n", a, b);
    }
else
    {
        printf("Le produit de %f et %f est négatif\n", a, b);
    }
return (0);
}
