//War - Estruturado//
//Nível novato

// Incluindo Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Território deve ter:
//nome, cor e número de tropas

// Defnindo constantes Globais
#define NUMERO_TERRITORIO 5
#define TAMANHO_NOME 30
#define TAMANHO_COR 10
#define NUMERO_TROPA 30

//Criando ficha de personagem com struct para armazenar
//Definição da Estrutura Struct do Território

struct Territorio {
    char nome[TAMANHO_NOME];
    char cor[TAMANHO_COR];
    int tropas[NUMERO_TROPA];
};

//Função para limpar o buffer de entrada, ela tem um loop (while) que limpa a entrada, função do tipo de prevenção
void limparBufferEntrada(){
    int c;
    while ((c=getchar()) != '\n' && c != EOF);
}

//Função para o usuário fazer o cadastro do Território
int main(){
    struct Territorio Exercito[NUMERO_TERRITORIO];
    int totalExercito = 0;
    int opcao;


//Solicitar dados do Território para o usuário
printf("♥ • ♥ • ♥ • ♥ • WAR • ♥ • ♥ • ♥ • ♥\n");
printf("♥ • ♥ Será necessário fazer cadastro dos Territórios iniciais\n Preencha os dados: ♥ • ♥\n");

//Fazendo um laço com for para o usuário preencher os dados
for (totalExercito = 0; totalExercito < NUMERO_TERRITORIO; totalExercito++) {
    
    //Solicitando dados de string primeiro, nome e cor
    // Usando o %d para fazer uma estrutura de lista do 1 ao 5 
    printf("♥ → → → Ficha%d ← ← ← ♥\n", totalExercito + 1);

    printf("♥ Nome do seu Território:\n");
    fgets(Exercito[totalExercito].nome, TAMANHO_NOME, stdin);

    printf("♥ Qual é a cor do seu Exército:\n");
    fgets(Exercito[totalExercito].cor, TAMANHO_COR, stdin);

    
    Exercito[totalExercito].nome[strcspn(Exercito[totalExercito].nome, "\n")] = 0;
    Exercito[totalExercito].cor[strcspn(Exercito[totalExercito].cor, "\n")] = 0;

    //Adicionando os números inteiros
    printf("♥ Quantidade de tropas do seu Exército:\n");
    scanf("%d", &Exercito[totalExercito].tropas);

    limparBufferEntrada();

    //Ao rodar o código, percebi um erro de vulnerabilidade, o usuário pode inserir números ou letras
    //O código não aparece erro

}

}