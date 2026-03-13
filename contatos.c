#include <stdio.h>
#include <string.h>
#include "contatos.h"

void cadastrarContato(Contato contatos[], int *total) {

    printf("Nome: ");
    scanf(" %[^\n]", contatos[*total].nome);

    printf("Telefone: ");
    scanf(" %[^\n]", contatos[*total].telefone);

    printf("Email: ");
    scanf(" %[^\n]", contatos[*total].email);

    (*total)++;

    printf("Contato cadastrado!\n");
}

void listarContatos(Contato contatos[], int total) {

    int i;

    for(i = 0; i < total; i++) {

        printf("\nContato %d\n", i+1);
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %s\n", contatos[i].telefone);
        printf("Email: %s\n", contatos[i].email);
    }
}

void buscarContato(Contato contatos[], int total) {

    char nomeBusca[100];
    int i;

    printf("Digite o nome: ");
    scanf(" %[^\n]", nomeBusca);

    for(i = 0; i < total; i++) {

        if(strcmp(contatos[i].nome, nomeBusca) == 0) {

            printf("\nContato encontrado\n");
            printf("Nome: %s\n", contatos[i].nome);
            printf("Telefone: %s\n", contatos[i].telefone);
            printf("Email: %s\n", contatos[i].email);
            return;
        }
    }

    printf("Contato nao encontrado.\n");
}

void editarContato(Contato contatos[], int total) {

    char nomeBusca[100];
    int i;

    printf("Digite o nome do contato: ");
    scanf(" %[^\n]", nomeBusca);

    for(i = 0; i < total; i++) {

        if(strcmp(contatos[i].nome, nomeBusca) == 0) {

            printf("Novo telefone: ");
            scanf(" %[^\n]", contatos[i].telefone);

            printf("Novo email: ");
            scanf(" %[^\n]", contatos[i].email);

            printf("Contato atualizado!\n");
            return;
        }
    }

    printf("Contato nao encontrado.\n");
}

void removerContato(Contato contatos[], int *total) {

    char nomeBusca[100];
    int i, j;

    printf("Digite o nome para remover: ");
    scanf(" %[^\n]", nomeBusca);

    for(i = 0; i < *total; i++) {

        if(strcmp(contatos[i].nome, nomeBusca) == 0) {

            for(j = i; j < *total - 1; j++) {
                contatos[j] = contatos[j + 1];
            }

            (*total)--;

            printf("Contato removido!\n");
            return;
        }
    }

    printf("Contato nao encontrado.\n");
}

int contarRecursivo(int n) {

    if(n == 0)
        return 0;

    return 1 + contarRecursivo(n - 1);
}
