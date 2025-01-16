#include <stdio.h>
#define PI 3.14159


int main (void);


 int aireDuCarre (int cote)
{
    return cote*cote;

}

 int aireDuRectangle (int longueur, int largeur)

{
    return longueur * largeur;

}
 double aireDuTriangle (double base, double hauteur)

 {
    return base * hauteur / 2.0;

 }

 double aireDuCercle (double rayon)

 {
    return PI * rayon * rayon;

 }

 void calculAire(char forme)
 {
    if (forme == 'c')
    {else if (forme == 'r')}

    {else if (forme == 't')}
    
    {else if (forme == 'o')}
 

 }

if (forme == 'c')

{
    int cote;
    printf("entre la longueur du cote du carre : ");
    scanf("%d", &cote);
    printf("L'aire du carre est : %d\n", aireDuCarre(cote));

}

else if ( forme == 'r')
{
    int longueur, largeur;
printf("Entre la longueur et la largeur du rectangle : ");
scanf("%d %d" , &longueur, &largeur);
printf("L'aire du rectangle est : %d\n", aireDuRectangle(longueur, largeur));

}

else if ( forme == 't')
{
    double base, hauteur;
    printf("Entre la base et la hauteur du triangle : ");
    scanf("%1f %1f" , &base, & hauteur);
    printf("L'aire du triangle est : %.21f\n", aireDuTriangle (base, hauteur));

}

else if ( forme == 'o')
{
    double rayon;
    printf("Entre le rayon du cercle : ");
    scanf("%1f", &rayon);
    printf("L'aire du cercle est : %.21f\n", aireDuCercle (rayon));

}
else
{
    printf("commande invalide, choisis c, r, t, ou o");
}

int main ()
{
    char forme;
    printf("choisis une forme geometrique : \n");
    printf("c pour carre\n");
    printf("r pour rectangle");
    printf("t pour triangle");
    printf("o pour cercle");
    printf("ton choix : ");
    scanf("%c", &forme);

    calculAire (forme);
    return 0;
}