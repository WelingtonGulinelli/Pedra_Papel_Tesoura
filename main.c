#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num_usuario, num_pc, opcao;
    
    // setar o srand apenas uma vez no início do programa
    srand(time(NULL));

    do {
        // Solicitar ao usuário para escolher sua opção
        printf("Escolha uma opção:\n 0 = PEDRA.\n 1 = PAPEL.\n 2 = TESOURA.\n");
        scanf("%d", &num_usuario);

        // verificar se o usuário escolheu 0, 1 ou 2
        if (num_usuario < 0 || num_usuario > 2) {
            printf("OPÇÃO INVÁLIDA!\n");
            continue;  // volta ao início do loop
        }

        // Guardar valor aleatório do computador
        num_pc = rand() % 3;

        // Verificar quem ganhou
        if (num_usuario == num_pc) {
            printf("EMPATE!\n");
        } else if (num_usuario == 0 && num_pc == 2 ||  // PEDRA ganha de TESOURA
                   num_usuario == 1 && num_pc == 0 ||  // PAPEL ganha de PEDRA
                   num_usuario == 2 && num_pc == 1) {  // TESOURA ganha de PAPEL
            printf("VOCÊ GANHOU!\n");
        } else {
            printf("VOCÊ PERDEU!\n");
        }

        // Perguntar ao usuário se ele quer jogar novamente
        printf("\n\nDeseja jogar novamente? (1 = SIM / 0 = NÃO): ");
        scanf("%d", &opcao);
    } while (opcao == 1);

    return 0;
}
