#include<unistd.h>

void ft_print_reverse_alphabet(void)
{
    write(1,"zyxwvutsrqponmlkjihgfedcba", 26);
    
    char lettre;
    lettre = 122;
    while (lettre>=97)
    {
        write(1, &lettre, 1);
        lettre--;
    }
    
}