#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void movimentoBispo(int casas){
    for (int i = 0; i < casas; i++)
    {
        printf("Cima\n");

        for (int j = 0; j < 1; j++)
        {
            printf ("Direita\n");
        }
    
    }
    
}

void movimentoTorre(int casas){
    if (casas > 0)
    {
         printf("Direita \n");

         movimentoTorre(casas - 1);
    }
    
}

void movimentoRainha(int casas){
    if (casas > 0)
    {
         printf ("Esquerda\n");

         movimentoRainha(casas - 1);
    }
    
}
void movimentoCavalo(int etapa)
{
    if (etapa == 0)
        return;

    for (int i = 0; i < etapa; i++)
    {
        if (etapa == 2)
        {
            printf("Cima\n");
            continue;
        }

        if (etapa == 1)
        {
            printf("Direita\n");
            break;
        }
    }

    movimentoCavalo(etapa - 1);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavalo = 2;
    int i = 0;
    int j = 0;
    int l = 0;

  

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    //printf ("==Bispo==\n");
    //while (i < casasBispo)
    //{
    //    printf("Cima, direita \n");
    //    i++;
    //}
    movimentoBispo(casasBispo);
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf ("==Torre==\n");
    
    movimentoTorre(casasTorre);
        
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf ("==Rainha==\n");

    movimentoRainha(casasRainha);
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf ("==Cavalo==\n");
    
    movimentoCavalo (casasCavalo);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
