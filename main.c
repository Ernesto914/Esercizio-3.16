#include <stdio.h>

int main(void)
{
    int numero1, numero2, numero3;
    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &numero3);
    if (numero1 > numero2 && numero1 > numero3){
        printf("Il primo numero è quello maggiore.");}
    else if (numero2 > numero1 && numero2 > numero3){
        printf("Il secondo numero è quello maggiore.");}
    else if (numero3 > numero1 && numero3 > numero2){
        printf("Il terzo numero è quello maggiore.");}
    return 0;
}
