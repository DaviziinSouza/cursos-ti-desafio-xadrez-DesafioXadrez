#include <stdio.h>

int main()
{
    int opcao;

    do
    {
        int bispo = 1, torre, rainha = 1;


        printf("MOVIMENTO DAS PEÇAS DE XADREZ\n");
        printf("[1]. Bispo.\n");
        printf("[2]. Rainha.\n");
        printf("[3]. Torre.\n");
        printf("[4]. Sair.\n");
        printf("Escolha qual peça deseja mover.\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        {
            printf("Movimento do Bispo\n");

            while (bispo <= 5)
            {
                printf("Cima, direita.\n");
                bispo++;
            }
            break;
        }
        case 2:
        {
            printf("Movimento da Rainha.\n");

            do
            {
                printf("Esquerda\n");
                rainha++;
            } while (rainha <= 8);
            break;
        }
        case 3:
        {
            printf("Movimento da Torre.\n");
            for (torre = 1; torre <= 5; torre++)
            {
                printf("Direita.\n");
            }
            break;
        }
        case 4: 
        {
            printf("Saindo...\n");
        }
        break;

        default: 
        printf ("Opção invalida por favor tente novamente\n");
    }
        
    } while (opcao != 4);

    return 0;
}
