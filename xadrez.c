#include <stdio.h>

// Movimentação da Torre.
void moverTorre(int casas)
{
    if (casas == 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Movimentação da Rainha.
void moverRainha(int casas)
{
    if (casas == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento do Bispo com recursividade e loop aninhado
void moverBispo(int vertical, int horizontal)
{
    if (vertical == 0)
        return;

    for (int i = 0; i < horizontal; i++)
    {
        printf("Direita\n");
    }

    printf("Cima\n\n");
    moverBispo(vertical - 1, horizontal);
}

// Movimentação do cavalo em L.
void moverCavalo()
{
    for (int i = 0; i < 2; i++)
    {
        printf("Cima\n");
    }

    printf("Direita\n");
}

int main()
{

    int opcao;
    const int casasTorre = 5;
    const int casasRainha = 8;
    const int VerticalBispo = 3;
    const int HorizontalBispo = 2;

    do
    {
        printf("\nMOVIMENTO DAS PEÇAS DE XADREZ\n");
        printf("[1]. Bispo\n");
        printf("[2]. Rainha\n");
        printf("[3]. Torre\n");
        printf("[4]. Cavalo\n");
        printf("[5]. Sair\n");
        printf("Escolha qual peça deseja mover: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao)
        {
        case 1:
            printf("Movimento do Bispo:\n");
            moverbispo(VerticalBispo, HorizontalBispo);
            break;

        case 2:
            printf("Movimento da Rainha:\n");
            moverRainha(casasRainha);
            break;

        case 3:
            printf("Movimento da Torre:\n");
            moverTorre(casasTorre);
            break;

        case 4:
            printf("Movimento do Cavalo:\n");
            moverCavalo();
            break;

        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 5);

    return 0;
}