#include <stdio.h>
#include <string.h>
#include "converter.h"
#include "conversor.h"

int main() {
    char escolha[10];
    printf("Welcome to the Unit Converter Program!\n");
    printf("Choose your language / Escolha seu idioma:\n");
    printf("1 - English\n2 - Português\n");
    printf("> ");
    scanf("%s", escolha);

    if (strcmp(escolha, "1") == 0) {
        converte();
    } 
    else if (strcmp(escolha, "2") == 0) {
        converso();
    } 
    else {
        printf("Invalid option. Please restart the program and choose a valid language option.\n");
    }

    return 0;
}