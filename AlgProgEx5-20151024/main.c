//obs: novo saldo mostrando errado

#include <stdio.h>
#include <stdlib.h>

/*5) Escrever um programa em c que simule contas bancárias, com as seguintes especificações:
• Ao iniciar o programa vamos criar contas bancárias para três clientes.
• Cada conta terá o nome e o CPF do cliente associado a ela.
• No ato da criação da conta o cliente precisará fazer um depósito inicial.
• Após as contas serem criadas, o sistema deverá possibilitar realizações de saques ou depósitos nas contas.
• Sempre que uma operação de saque ou depósito seja realizada, o sistema deverá imprimir o nome do titular e o saldo final da conta.*/

struct contaBancaria{
    char nome[50];
    int cpf;
    float saldo;
    int id;
};

void receberContasBancarias(struct contaBancaria conta[]){
    int i;
    for(i=0;i<3;i++){
        conta[i].id = i+1;
        printf("\nNome da Conta Numero %d :", conta[i].id);
        scanf("%s", &conta[i].nome);
        printf("\nInsira o CPF: ");
        scanf("%d", &conta[i].cpf);
        printf("\nDeposito Inicial: ");
        scanf("%f", &conta[i].saldo);
        system("clear");
    }
}

void sacarDinheironaConta(struct contaBancaria conta[]){
    int escolha;
    int qtdSacar;
    printf("\nQual conta deseja sacar? de 1 a 3. ");
    scanf("%d", &escolha);
    int i;
    for(i=0;i<3;i++){
        if (conta[i].id == escolha){
            printf("\nNome Dono da Conta: %s", conta[i].nome);
            printf("\nSaldo da Conta: %.2f", conta[i].saldo);
            printf("\nQuantidade a Sacar: ");
            scanf("%f", &qtdSacar);
            if(qtdSacar > conta[i].saldo){
                float novoSaldo = conta[i].saldo - qtdSacar;
                printf("\nSaque feito com sucesso! \nSaldo atual: %.2f", novoSaldo);

            } else {
                printf("\nA quantidade a ser sacada é maior que o saldo!");
            }

        }
    }
}

int main()
{
    struct contaBancaria conta[3];
    receberContasBancarias(conta);
    sacarDinheironaConta(conta);
    return 0;
}
