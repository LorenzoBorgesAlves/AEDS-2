#include <stdio.h>
#include <stdbool.h>

bool comparar(int a, int b, int M) {
    int a_m = a % M;
    int b_m = b % M;

    if (a_m != b_m) {
        return a_m < b_m;
    }

    //caso empate

    bool a_impar = (a % 2 != 0);
    bool b_impar = (b % 2 != 0);

    if (a_impar && !b_impar) return true;   // impar antes de par
    if (!a_impar && b_impar) return false;  // par depois de ímpar

    if (a_impar && b_impar) {
        return a > b; // entre impares, maior primeiro
    }

    return a < b; // entre pares, menor primeiro
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selecao(int *array, int N, int M) {
    for (int i = 0; i < N - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < N; j++) {
            if (comparar(array[j], array[menor], M)) {
                menor = j;
            }
        }
        swap(&array[menor], &array[i]);
    }

    for (int i = 0; i < N; i++) {
        printf("%d\n", array[i]);
    }
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    while (N != 0 || M != 0) {
        printf("%d %d\n", N, M);

        int array[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &array[i]);
        }

        selecao(array, N, M);

        scanf("%d %d", &N, &M);
    }

    printf("0 0\n");

    return 0;
}

/*
Analise da complexidade

Foi usado Selection Sort.

Comparacoes:
No primeiro for, o i vai de 0 até N-2.
Para cada i, o segundo for compara os elementos da parte da direita do vetor.

Entao a quantidade de comparacoes fica:

(N-1) + (N-2) + ... + 1

Isso da:
N(N-1)/2

Como a funcao comparar faz só um numero fixo de operacoes
(mod, if, teste de par/impar etc), o custo dela é constante, ou seja, O(1).

Assim, o custo total das comparacoes fica O(N ao quadrado).

Movimentacoes:
A cada passagem do laco externo, no final é feito um swap.
O swap tem 3 atribuicoes:
temp = *a
*a = *b
*b = temp

Como o laco externo roda N-1 vezes, entao temos:
3(N-1) movimentacoes

Logo, o custo das movimentacoes é O(N).

*/
