#include <stdio.h>  // CRIPTOGRAFIA ROT13 // Vscode //Linux //1LL0G1C4L
#include <stdlib.h> // A, B, C, D, E, F, G, H, I, J, K, L, M, // N, O, P, Q, R, S, T, U, V, W, X, Y, Z
#include <string.h>

// Prototipagem das funções
void encrypt();
void cabecalho();

int main()
{
    int resp;

    do{
        system("clear");

        cabecalho();
        encrypt();

        printf ("\nDeseja continuar: [1]Sim / [2]Nao\n");
        scanf (" %d", &resp);

    //Vai repetir até que o usuário digite 2 para sair do algoritmo.
    } while (resp != 2);

    system("clear");
    printf ("----------------------------\n");
    printf ("Desenvolved by 1LL0G1C4L\n");
    printf ("----------------------------\n");

   return 0;
}

void encrypt()
{
    int tam = 0;
    char text[255];

    //Salva a palavra digitado no vetor de string.
    printf ("\nDigite a palavra que deseja criptografar: ");
    scanf (" %[A-Z a-z !-@]", text);

    //Retorna para a variável (tam) o tamanho da string digitada.
    tam = strlen(text);

    for (int i = 0; i < tam; i++)
    {
        //metade do alfabeto soma + 13.
        if (text[i] >= 'a' && text[i] < 'n' || text[i] >= 'A' && text[i] < 'N')
        {
            text[i] = text[i] + 13;
        }
            else
            {
                // outra metade subtrai 13.
                if ((text[i] >= 'n' && text[i] <= 'z' || text[i] >= 'N' && text[i] <= 'Z'))
                {
                    text[i] = text[i] - 13;
                }
            }
    }

    printf ("\nPalavra criptografada: %s\n", text);
}

void cabecalho()
{
    printf ("|--------------|\n");
    printf ("|              |\n");
    printf ("| Cr1pt0gr4phy |\n");
    printf ("|              |\n");
    printf ("|   ROT--13    |\n");
    printf ("|              |\n");
    printf ("|--------------|\n");
}
