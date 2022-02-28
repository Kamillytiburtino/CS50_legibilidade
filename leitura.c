#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <string.h>


int main(void)

{
    int contar_letras = 0;
    int contar_palavras = 0;
    int contar_frases = 0;

    string texto = get_string ("Texto:");

    for (int i = 0; i < strlen (texto); i++)

    {
        if ((texto[i] >= 'a' && texto[i] <= 'z') || (texto [i] >= 'A' && texto[i] <= 'Z'))
        {
            contar_letras++;
    
        }
        
         contar_palavras = texto[i] = ' ' ? contar_palavras + 1 : contar_palavras;

    }
}