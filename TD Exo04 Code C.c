//Affichage de la somme et de la moyenne de deux notes
/*Algorithme TD 01 Exo04 somme et moyenne de deux nombres

Variables: a, b, somme, moyenne : reels
Début
    Afficher("Entrer le premier nombre: ");
    Lire(a);
    Afficher("Entrer le second nombre: ");
    Lire(b);
    	somme<-a+b;
        moyenne<-(a+b)/2;
    Afficher("La somme de ", a, " et ", b " est ", somme);
    Afficher("La moyenne de ", a, " et ", b " est ", moyenne);
Fin
*/

#include<stdio.h>

int main()
{
float a, b, somme, moyenne;
printf("Entrez le premier nombre: ");
scanf("%f", &a);
printf("Entrez le second nombre: ");
scanf("%f", &b);
    somme=a+b;
    moyenne=(a+b)/2;
printf("La somme de %f et %f est %f\n", a, b, somme);
printf("La moyenne de %f et %f est %f\n", a, b, moyenne);
return (0);
}
