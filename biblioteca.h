//
// Created by unifmnalesso on 12/09/2023.
//

#ifndef PROJETO1_BIBLIOTECA_H
#define PROJETO1_BIBLIOTECA_H

#endif //PROJETO1_BIBLIOTECA_H

//Definicao de tipo da struct do array EscritaTarefas
typedef struct {
    int prioridade;
    char descricao[300];
    char categoria[100];
}EscritaTarefas;

//inicializacao das funcoes usadas no programa
void criarTarefa(EscritaTarefas *);

void listarTarefa(EscritaTarefas *, int);

void deletarTarefa(EscritaTarefas *, int);

void escrita(EscritaTarefas *, int );

int leitura(EscritaTarefas *);

void editartarefa(EscritaTarefas * ,int);

void filtrarprioridade(EscritaTarefas *, int);

void filtrarcategoria(EscritaTarefas *, int);

void filtrarprioridadecategoria(EscritaTarefas *, int);