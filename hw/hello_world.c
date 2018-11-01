#include <stdio.h>

int main() {

    int escolha;

    scanf("%d", &escolha);

    switch (escolha) {

        case 1:
            printf("Ola mundo!\n");
            break;

        case 2:
            printf("Hello world!\n");
            break;

        case 3:
            printf("Hola mundo!\n");
            break;

        default:
            printf("Essa opcao nao existe.\n");
    }

    return 0;
}
