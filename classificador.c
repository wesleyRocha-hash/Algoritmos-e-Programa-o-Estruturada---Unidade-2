### 2️⃣ Arquivo: `classificador.c`
Este é o seu artefato técnico. Ele utiliza a lógica de decisão encadeada para garantir que o número zero seja tratado corretamente.

```c
#include <stdio.h>

/**
 * ESTUDANTE: Wesley
 * OBJETIVO: Classificar um número como Positivo, Negativo ou Zero.
 * CONCEITO: Estrutura Condicional Encadeada (if-else if-else).
 */

int main() {
    float numero;

    printf("--- SISTEMA DE CLASSIFICACAO (Wesley) --- \n");
    printf("Insira um valor numerico: ");
    
    // Leitura formatada
    if (scanf("%f", &numero) != 1) {
        printf("Erro: Entrada invalida!\n");
        return 1;
    }

    // Lógica de Decisão (Unidade 2)
    if (numero > 0) {
        printf("Resultado: O numero %.2f e POSITIVO.\n", numero);
    } 
    else if (numero < 0) {
        printf("Resultado: O numero %.2f e NEGATIVO.\n", numero);
    } 
    else {
        printf("Resultado: O valor digitado e NEUTRO (Zero).\n");
    }

    return 0;
}
