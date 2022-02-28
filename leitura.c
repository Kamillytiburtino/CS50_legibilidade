#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <string.h>


int main(void)

{
    int contar_letras = 0;
    int contar_palavras = 1;
    int contar_frases = 0;

    string texto = get_string("Texto:");

    // percorre todo o texto e analisa cada caracter isoladamente
    for (int i = 0; i < strlen(texto); i++)
    {
        //carater isolado do texto
       char caractere = texto[i];

       // se o caractere for uma letra maiuscula ou minuscula incremento o contador de letras
       if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z'))
       {
           contar_letras++;
       }

       // se o caractere é um espaço incremento o contador de palavras
       if (caractere == ' ')
       {

           contar_palavras++;
       }

       // se o caracter for . || ? || ! devo incrementar o contador de frases
       if (caractere == '.' || caractere == '?' || caractere == '!')
       {
           contar_frases++;
       }
    }

    printf("Letras: ");
    printf("%d", contar_letras);
    printf("\n");
    printf("Palavras: ");
    printf("%d", contar_palavras);
    printf("\n");
    printf("Frases: ");
    printf("%d", contar_frases);
    printf("\n");


    float media_letras = 0;
    float media_frases = 0;

    // calcular a media de letra para cada 100 palavras
    media_letras = contar_letras * 100 / contar_palavras;


    // calcular a média de frases para cada 100 palavras
    media_frases = contar_frases * 100 / contar_palavras;

    float indice = 0.0588 * media_letras - 0.296 * media_frases - 15.8;

    // se o resultado do índice for < 1, o resultado será 1
    if (indice < 1)
    {
        printf("Grade: Before1 ");
        printf("\n");
    }
    else if (indice > 16)
    {
        printf("Grade: 16+ ");
        printf("\n");
    }
    else {
        printf("Grade: ");
        printf("%.0f", indice);
        printf("\n");
    }

}