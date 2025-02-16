//Information si un nombre entré est positif ou négatif
/*Algorithme TD 01 Exo01: Nombre positif ou négatif

Variable: n: entier
Début
    Afficher("Entrez un nombre:\n");
    Lire(n);
    Si (n<0)
         Afficher("Ce nombre est négatif");
    Sinon Si(n>0)
         Afficher("Ce nombre est nul")
    Sinon
         Afficher("Ce nombre est positif");
    Fin Si
Fin
*/

#include<stdio.h>

int main()
{
int n;
printf("Entrer un nombre: ");
scanf("%d", &n);
  if(n<0)
  {
    printf("%d est négatif\n");
  }
  else if(n==0)
  {
    printf("Ce nombre est nul\n");
  }
  else
  {
    printf("%d est positif\n");
  }
return (0);
}

