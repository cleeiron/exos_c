#include <unistd.h>

void ft_print_numbers(void);
{
    int chiffre = 0;
    char chiffre_ascii;

    while(chiffre<=9)
    {
        chiffre_ascii= chiffre +'0';
        write(1, &chiffre_ascii,1);
        chiffre ++;
    }
    write(1, "\n", 1);
}
void ft_is_negative(int n);
{
    int n = 9;
    char n_ascii;

    while(n >= 0)
    {
    n_ascii = n +'0';
    write(1, &n_ascii, 1);
        n--;
}
    write(1, "\n", 1);

}