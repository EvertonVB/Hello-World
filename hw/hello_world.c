#include <stdio.h>

int main() {

    int escolha;

    scanf("%d", &escolha);

    switch (escolha) {

        case 1:
            printf("Hello World!\n");
            break;

        default:
            printf("Essa opcao nao existe.\n");
    }

    return 0;
}
