//Affichage du maximum de trois nombres
/*
Algorithme TD 01 Exo07 Affichage du maximum de trois nombres

Variables:  a, b, c, max: reels

Début
    Afficher("Entrez a: ");
    Lire(a);
        max=a;
    Afficher("Entrez b: ");
    Lire(b);
        Si (b>max)
            max=b;
        Fin Si
    Afficher("Entrez c: ");
    Lire(c);
        Si (c>max)
            max=c;
        Fin Si
    Afficher("Le nombre maximum est ", max, "\n");

Fin

*/

#include<stdio.h>

int main()
{
    float a, b, c, max;
    printf("Entrez a: ");
    scanf("%f", &a);
        max=a;
    printf("Entrez b: ");
    scanf("%d", &b);
        if(b>max)
        {
            max=b;
        }
    printf("Entrez c: ");
    scanf("%f", &c);
        if(c>max)
        {
            max=c;
        }
    printf("Le nombre maximum est %f\n", max);

    return (0);
}
