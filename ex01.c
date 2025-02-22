#include <stdio.h>
#define PI 3.1415

int calcul_aire_rectangle (int longeur, int largeur)
{
    return longeur*largeur;
}

int calcul_aire_triangle (int longeur, int largeur)
{
    return longeur*largeur/2;
}

int calcul_aire_carre (int cote)
{
    return cote*cote;
}

float calcul_aire_cercle (int rayon)
{
    return (rayon*rayon*PI);
}


int main ()
{

    int longeur;
    int largeur;
    int cote;
    int rayon;

   
    printf("Quel est la longeur ?\n");
    scanf("%d",&longeur);
    printf("Quel est la largeur ?\n");
    scanf("%d",&largeur);
    printf("Quel est la longeur du cote ?\n");
    scanf("%d",&cote);
    printf("Quel est le rayon ?\n");
    scanf("%d",&rayon);
    


    printf("L'aire du rectangle est : %d\n", calcul_aire_rectangle(longeur,largeur));
    printf("L'aire du triangle est : %d\n", calcul_aire_triangle(longeur,largeur));
    printf("L'aire du carre est : %d\n", calcul_aire_carre(cote));
    printf("L'aire du cercle est : %f\n", calcul_aire_cercle(rayon));

    return 0;
}