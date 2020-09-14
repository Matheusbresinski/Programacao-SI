#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100
int op;
void cadastro();
void pesquisa();
void lista();
struct tp_endereco{

	char rua[40];
	int numero;
	char bairro[40];
	char cidade[40];
	char estado[3];
	int cep;
};

struct tp_data_nascimento{

	int dia;
	int mes;
	int ano;
};

struct cadastro_cliente{

	char nome_cliente[40];
	int telefone;

	struct tp_endereco endereco;
	struct tp_data_nascimento data_nascimento;
};

struct cadastro_cliente cad_cliente[TAM];



int main(void)
{
    int opc;
    char nome[20];

    char login[15] = "mecanica";
    char login1[15];
    char senha[15] = "123";
    char senha1[15];

    printf("Digite o Login: ");
    scanf("%s",login1);
    printf("Digite a senha:");
    scanf("%s",senha1);
    if (strcmp(login, login1) == 0 && strcmp(senha,senha1) == 0)
    {

        printf("Entrando no sistema....\n");
        do{
        system("cls");
        printf("\n*********************\n");
        printf("****   SISTEMA PARA CADASTRO DE CLIENTES   ****\n");
        printf("****** 1-CADASTRAR CLIENTE     ******\n");
        printf("****** 2-CONSULTAR CLIENTE     ******\n");
        printf("****** 3-EDITAR CLIENTE        ******\n");
        printf("****** 4-EXCLUIR CLIENTE       ******\n");
        printf("****** 5-SITUACAO CADASTRAL    ******\n");
        printf("****** 0-PARA SAIR DO PROGRAMA ******\n");

        printf("Informe uma opcao: ");
        scanf("%i",&opc);
        switch(opc){
            case 1:
                printf("CADASTRAR NOVO CLIENTE\n");
                cadastro();
            break;
            case 2:
                printf("CONSULTAR CLIENTE\n");
                lista();
            break;
            case 3:
                printf("EDITAR CADASTRO DE CLIENTE\n");
            break;
            case 4:
                printf("EXCLUIR CADASTRO DE CLIENTE\n");
            break;
            case 5:
                printf("SITUAÇÃO DE CADASTRO\n");
            break;
            case 0:
                printf("Saindo do programa...\n");
            break;
            default:
            break;
        }
    }while(opc!=0);

    }
    else
    {
    	printf(" senha ou login errado\n");

    }

  system("pause");
  return 0;


}

cadastro(){

	int i;
    int qt;
	printf("\n\n--------------CADASTRO DE CLIENTES-----------------\n\n");

        printf("\nDigite quantos cadastros deseja Realizar: ");
        scanf("%d",&qt);


	for(i=0;i<qt;i++){
		printf("\n\nNome do cliente.....................: ");
		fflush(stdin); // limpa o buffler do teclado.
		gets(cad_cliente[i].nome_cliente);

		printf("\nDigite o Telefone do cliente....: ");
		scanf("%d", &cad_cliente[i].telefone);

		printf("\nDigite a Rua......................: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.rua);

		printf("\nDigite o numero..................: ");
		scanf("%d", &cad_cliente[i].endereco.numero);

		printf("\nBairo............................: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.bairro);

		printf("\nCidade............................: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.cidade);

		printf("\nEstado............................: ");
		fflush(stdin);
		gets(cad_cliente[i].endereco.estado);

		printf("\nDigite o cep............................: ");
		scanf("%d", &cad_cliente[i].endereco.cep);

		printf("\nDia de nascimento............................: ");
		scanf("%d", &cad_cliente[i].data_nascimento.dia);

		printf("\nMes de nascimento............................: ");
		scanf("%d", &cad_cliente[i].data_nascimento.mes);

		printf("\nAno de nascimento............................: ");
		scanf("%d", &cad_cliente[i].data_nascimento.ano);
	} // FIM DA COLETA DE DADOS.
}


void lista(){
     	int i;

		for(i=0; i<TAM; i++){
        if(cad_cliente[TAM]>0){
		printf("\n\n----------------CADASTRO FEITOS------------------");
		printf("\n Nome.........................: %s", cad_cliente[i].nome_cliente);
		printf("\n Rua..........................: %s", cad_cliente[i].endereco.rua);
		printf("\n Numero.......................: %d", cad_cliente[i].endereco.numero);
		printf("\n Bairro.......................: %s", cad_cliente[i].endereco.bairro);
		printf("\n Cidade.......................: %s", cad_cliente[i].endereco.cidade);
		printf("\n Estado.......................: %s", cad_cliente[i].endereco.estado);
		printf("\n Cep..........................: %d", cad_cliente[i].endereco.cep);
		printf("\n Dia Nasc.....................: %d", cad_cliente[i].data_nascimento.dia);
		printf("\n Mes Nasc.....................: %d", cad_cliente[i].data_nascimento.mes);
		printf("\n Ano Nasc.....................: %d", cad_cliente[i].data_nascimento.ano);
		printf("\n\n-----------------------------------------------------");
	    }else{
        break;
        }
        system("pause");

	}


	system("pause");

	}






