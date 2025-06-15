#include <unistd.h>

void ft_print_numbers(void)
{
    int chiffre = 0;
    char chiffre_ascii;
    while(chiffre<=9){
        chiffre_ascii= chiffre +'0';
        write(1, &chiffre_ascii,1);
        chiffre ++;
    }
}