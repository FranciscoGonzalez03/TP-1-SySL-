#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
int main (void)
{
    char caracter;
    printf("Ingrese una frase (enter para salir) ");
    caracter=getchar();
    while(caracter!='\n')
    {
        if(isalpha(caracter)!=0)
        {
            if(islower(caracter)!=0)
            {
                caracter=toupper(caracter);
            }
            else
            {   
                caracter=tolower(caracter);
            }
            putchar(caracter);
        }
        else
        {
            if(isdigit(caracter)==0)
            {
                putchar(caracter);
            }
        }
        caracter=getchar();
    }
    return EXIT_SUCCESS;
}