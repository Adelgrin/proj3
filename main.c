/* Grupo:
 * Nome: Lucas Kerr do Amaral | RA: 221230329
 */


#include <stdio.h>
#include "biblioteca.h"

int main() {
    int tarefa; //variavel para escolha da opcao do menu
    int valortarefa = 0; //variavel do tamanho do array
    do{
        //Inicializacao do array no struct EscritaTarefas
    EscritaTarefas TodasTarefas[100];

    //Menu do programa
    printf("Selecione o tipo de tarefa que voce deseja executar:\n"
           "0) Sair do programa;\n"
           "1) Criar tarefa;\n"
           "2) Listar tarefa;\n"
           "3) Deletar tarefa;\n"
           "4) Editar tarefa;\n"
           "5) Filtrar por prioridade;\n"
           "6) Filtrar por categoria;\n"
           "7) Filtrar por prioridade e categoria;\n"
           "8) Filtrar por estado;\n"
           "9) Exportar por prioridade;\n"
           "10) Exportar por categoria;\n"
           "11) Exportar por prioridade e categoria;\n");
    printf("Sua escolha eh: ");
    scanf("%d", &tarefa);
    valortarefa = leitura(TodasTarefas); //Le o arquivo binario e aplica o valor no valortarefa


    if (tarefa == 1){ //Escolha 1
        criarTarefa(&TodasTarefas[valortarefa]); //Leva para a funcao criarTarefa
        valortarefa++;//Acrescenta um valor para o contador de tamanho do array
        printf("\n");
        escrita(TodasTarefas, valortarefa); //Escreve o array e o contador em um arquivo binario
        while(getchar()!= '\n' && getchar() != EOF); //Clear buffer para evitar overflow para as entradas (scanf)
    }
    else if (tarefa == 2){
        printf("\n");
        listarTarefa(&TodasTarefas, valortarefa); //Leva para a funcao listarTarefa
        while(getchar()!= '\n' && getchar() != EOF); //Clear buffer para evitar overflow para as entradas (scanf)

    }
    else if (tarefa == 3) {
        printf("\n");
        int entrada; //variavel do valor da tarefa a ser removida
        printf("Digite o numero da tarefa a ser removida: ");
        scanf("%d", &entrada); //recebe o valor para variavel entrada
        deletarTarefa(&TodasTarefas, entrada); //Leva para a funcao deletarTarefa
        escrita(TodasTarefas, valortarefa); //Escreve o array e o contador em um arquivo binario
        while (getchar() != '\n' && getchar() != EOF); //Clear buffer para evitar overflow para as entradas (scanf)
    }else if(tarefa == 4){
        int entrada2;
        int c;
        while ((c = getchar())!= '\n' && c != EOF);
        printf("digite o valor da tarefa desejada");
        scanf("%d", &entrada2);
        entrada2--;
        editartarefa(&TodasTarefas, entrada2);
    }else if(tarefa == 5){
        printf("\n");
        filtrarprioridade(&TodasTarefas, valortarefa); //Leva para a funcao filtrar prioridade
    }else if(tarefa == 6){
        printf("\n");
        filtrarcategoria(&TodasTarefas, valortarefa);//Leva para a funcao filtrarcategoria
    }else if(tarefa == 7){
        printf("\n");
        filtrarprioridadecategoria(&TodasTarefas, valortarefa);//Leva para a funcao filtrar prioridade e categoria
    }else if(tarefa == 8){
        printf("\n");
        filtrarestado(&TodasTarefas, valortarefa);//Leva para a funcao filtrarestado
    }else if(tarefa == 9){
        printf("\n");
        exportarprioridade(&TodasTarefas, valortarefa);
    }else if(tarefa == 10){
        printf("\n");
        exportarcategoria(&TodasTarefas, valortarefa);
    }else if(tarefa == 11){
        printf("\n");
        exportarprioridadecategoria(&TodasTarefas, valortarefa);
    }
    else if(tarefa == 0){ //Escolha 0
        printf("FIM!"); //Finaliza o programa
        break;//Finaliza o programa
    }
    else{
        printf("Entrada invalida!"); //Caso o valor seja diferente de 0, 1, 2, 3, aparece essa mensagem
    }

    } while (tarefa !=0);//Fim do loop

}