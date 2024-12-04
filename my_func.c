#include <stdio.h>
#include <stdbool.h>

void my_error(const char *message);
int multiplication(int a, int b, char opp);
int addition(int a, int b, char opp);
int soustraction(int a, int b, char opp);
int division(int a, int b, char opp);

int calculatrice(int a, int b, char opp, bool *error)
{
    int result = 0;  // Initialise le résultat
    *error = false;  // Pas d'erreur au départ

    if (opp == '*')
    {
        result = multiplication(a, b, opp);
    }
    else if (opp == '+')
    {
        result = addition(a, b, opp);
    }
    else if (opp == '-')
    {
        result = soustraction(a, b, opp);
    }
    else if (opp == '/' && b != 0)
    {
        result = division(a, b, opp);
    }
    else
    {
        my_error("Erreur : opérateur non reconnu ou division par zéro.");
        *error = true;  // Signale qu'une erreur s'est produite
    }
    return result;
}

void my_error(const char *message)
{
    printf("%s\n", message);
}

int multiplication(int a, int b, char opp)
{
    if (opp == '*')
        return (a * b);
    return 0; // Ce cas ne devrait pas arriver
}

int addition(int a, int b, char opp)
{
    if (opp == '+')
        return (a + b);
    return 0; // Ce cas ne devrait pas arriver
}

int soustraction(int a, int b, char opp)
{
    if (opp == '-')
        return (a - b);
    return 0; // Ce cas ne devrait pas arriver
}

int division(int a, int b, char opp)
{
    if (opp == '/' && b != 0)
        return (a / b);
    return 0; // Ce cas ne devrait pas arriver
}

int main(void)
{
    int a = 12;
    int b = 6;
    int result;
    bool error;

    // Addition
    result = calculatrice(a, b, '+', &error);
    if (!error)
    {
        printf("Le résultat est : %d\n", result);
    }

    // Division
    result = calculatrice(a, b, '/', &error);
    if (!error)
    {
        printf("Le résultat est : %d\n", result);
    }

    // Multiplication
    result = calculatrice(a, b, '*', &error);
    if (!error)
    {
        printf("Le résultat est : %d\n", result);
    }

    // Soustraction
    result = calculatrice(a, b, '-', &error);
    if (!error)
    {
        printf("Le résultat est : %d\n", result);
    }

    // Opérateur invalide
    result = calculatrice(a, b, '\\', &error);
    if (!error)
    {
        printf("Le résultat est : %d\n", result);
    }

    return 0;
}
