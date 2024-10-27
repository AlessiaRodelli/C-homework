#include <stdio.h>
#define SIZE 9

int main(void)
{
    char matricola[SIZE];

    printf("inserisci numero matricola:");
    scanf("%9s", matricola);

    printf("La matricola e': %s\n", matricola);

    int a = (matricola[0] - 48) * 100 + (matricola[1] - 48) * 10 + matricola[2] - 48;
    int b = (matricola[3] - 48) * 10 + matricola[4] - 48;
    int c = (matricola[5] - 48) * 10 + matricola[6] - 48;
    int d = (matricola[7] - 48) * 10 + matricola[8] - 48;

    printf("i primi tre numeri sono: %d\n", a);
    printf("il 4 e 5 numero sono: %d\n", b);
    printf("il 6 e 7 sono: %d\n", c);
    printf("il 8 e 9 sono: %d\n", d);

    float media;
    media = (a + b + c + d) / 4;
    printf("Questa è la media della mia matricola divisa in quattro gruppi :%.2f", media);
}
