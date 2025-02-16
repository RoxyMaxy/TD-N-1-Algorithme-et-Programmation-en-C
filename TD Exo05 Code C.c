//Résolution d'une équation du second degré
/*Algorithme TD 01 Exo05 Résolution d'une équation du second degré

Varibles:a, b, c, delta, partie_reel, partie_imaginaire, x0, x1, x2: reels
Début
Afficher("Entrez a: ");
Lire(a);
Afficher("Entrez b: ");
Lire(b);
Afficher("Entrez c: ");
Lire(c);

Si (a==0)
*bx+c=0*
    Si(b==0)
    *c=0*
        Si(c==0)
        *0=0*
        Afficher("On a alors 0=0\n");
        Sinon
            Afficher("La proposition est fausse");
        Fin Si
    Sinon
    *bx=0*
        x0=(-c)/b;
        Afficher("C'est une équationn du premier degré!\n");
        Afficher("La solution est x0= ", x0, "\n");
    Fin Si
Sinon
*ax²+bx+c=0*
    delta=(b*b)-(4*a*c);
    Afficher("delta= ", delta);

    Si(delta<0)
    *solutions complexes*
        partie_reel=(-b)/(2*a);
        partie_imaginaire=(sqrt(-delta))/ (2*a;);
        Afficher("L'équation admet deux solutions complexes:\n");
        Afficher("x1= ",  partie_reel, " - ", partie_imaginaire, " i\n");
        Afficher("x1= ",  partie_reel, " + ", partie_imaginaire, " i\n");
    Sinon Si (delta==0)
    *une solution*
        x0=(-b)/(2*a);
        Afficher("L'équation admet une solution double:\n");
        Afficher("x0= ", x0, "\n");
    Sinon
    *deux solutions*
        x1=((-b)-sqrt(delta))/(2*a);
        x2=(-b)+qrt(delta))/(2*a);
        Afficher("Les solutions de l'équation sont:\n");
        Afficher("x1= ", x1, "\n");
        Afficher("x2= ", x2, "\n");
    Fin Si
Fin
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta;
    float partie_reel, partie_imaginaire;
    float x0, x1, x2;
    printf("Entrez a: ");
    scanf("%f", &a);
    printf("Entrez b: ");
    scanf("%f", &b);
    printf("Entrez c: ");
    scanf("%f", &c);

    if(a==0) //bx+c=0
    {
        if(b==0) //c=0
        {
            if(c==0)
            {
                printf("On a alors 0=0\n");
            }
            else
            {
                printf("La proposition est fausse.\n");
            }
        }
        else //bx+c=0
        {
            x0=-c/b;
            printf("C'est une équation du premier degré!\n");
            printf("La solution est x0 = %f\n", x0);
        }
    }
    else //ax²+bx+c=0
    {
        delta=(b*b)-(4*a*c);
        printf("delta = %f\n", delta);

        if (delta<0)//Solutions complexes
        {
            partie_reel=(-b)/(2*a);
            partie_imaginaire=(sqrt(-delta))/(2*a);
            printf("L'équation admet deux solutions complexes:\n");
            printf("x1=%f-sqrt(-%f)i\n", partie_reel, delta);
            printf("x1=%f+sqrt(-%f)i\n", partie_reel, delta);
        }
        else if (delta==0) //Solution unique
        {
            float x0=-b/(2*a);
            printf("L'équation admet une solution double:\n");
            printf("x0 = %f\n", x0);
        }
        else //Deux Solutions
        {
            float x1=(-b-sqrt(delta))/(2*a);
            float x2=(-b+sqrt(delta))/(2*a);
            printf("Les solutions de l'équation sont:\n");
            printf("x1 = %f\n", x1);
            printf("x2 = %f\n", x2);
        }
    }

    return (0);
}
