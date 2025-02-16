//Permutation des valeurs de trois variables a, b et c
/*Algorithme TD 01 Exo03: permutatin des valeurs de a, b et c

Variables: a, b, c : reels
Début
    Afficher("Entrez A: ");
    Lire(a);
    Afficher("Entrez B: ");
    Lire(b);
    Afficher("Entrez C: ");
    Lire(c);
        d<-a
        a<-b
        b<-c
        c<-d  
    Afficher("A=", a, "B=", b,"C=", c);
Fin
*/
#include<stdio.h>

int main()
{
float a, b, c, d;
printf("Entrez le nombre A: ");
scanf("%f", &a);
printf("Entrez le nombre B: ");
scanf("%f", &b);
printf("Entrez le nombre C: ");
scanf("%f", &c);
    d=a;
    a=b;
    b=c;
    c=d;
printf("A= %f, B=%f, C=%f\n", a, b, c);

return (0);
}
