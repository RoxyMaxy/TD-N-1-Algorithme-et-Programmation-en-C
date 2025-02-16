//Calcul et affichage de la moyenne de deux notes avec coefficients
/*Algorithme TD 01 Exo06 Moyennes de deux notes avec coefficients

Variables:  a, b, moyenne: reels
            coef1, coef2: entiers
Début
    Afficher("Entrez la première note: ");
    Lire(a);
    Afficher("Entrez son coefficient: ");
    Lire(coef1);
    Afficher("Entrez la deuxième note: ");
    Lire(c);
    Afficher("Entrer son coefficient: ");
    Lire(coef2);

moyenne<-((a*coef1)+(b*coef2))/(coef1+coef2);
Afficher("La moyenne de ", a, " et ", b, " de coefficients respectifs ", coef1, " et ", coef2, " est ", moyenne);

Fin
*/

#include<stdio.h>

int main()
{
float a, b, moyenne;
int coef1, coef2;
    printf("Entrez la première note: ");
    scanf("%f", &a);
    printf("Entrez son coefficient: ");
    scanf("%d", &coef1);
    printf("Entrez la deuxième note: ");
    scanf("%f", &b);
    printf("Entrer son coefficient: ");
    scanf("%d", &coef2);

moyenne=((a*coef1)+(b*coef2))/(coef1+coef2);
printf("La moyenne de %f et %f de coefficients respectifs %d et %d est %f\n", a, b, coef1, coef2, moyenne);

return (0);
}
