#include <stdio.h> //BIBLIOTECA PARA USO DAS FUNÇÕES DE ENTRADA E SAIDA DE DADOS
#include <stdlib.h> 

int main()
{
	// ESSA VARIAVEL GUARDA A OPCAO ESCOLHIDA PELO USUARIO.
	int opcao;
	// ESSA VARIAVEL GUARDA O VALOR QUE VAI SER CONVERTIDO.
	int valor;
	// ESSA VARIAVEL CONTROLA A EXECUCAO DO LOOP.
	int continuar = 1;
	
	// COMANDO WHILE UTILIZADO PARA CRIAR UM LOOP E REPETIR AS OPCOES.
	while (continuar == 1)
	{
		// SOLICITA A INFORMACOES DO USUARIO
		printf("Calculadora de Conversao de Base, escolha opcao;\n");
		printf("1 - para converter Decimal para Hexadecimal\n");
		printf("2 - para converter Hexadecimal pra Decimal\n");
		printf("0 - para encerrar o programa\n");
		printf("\nInforme opcao: ");
		scanf_s("%d", &opcao);

		// ESTRUTA DE DECISÃO IF ELSE.
		if (opcao == 1)
		{
			// UTILIZA OS CODIGOS %d E %x PARA FAZER A CONVERSÃO AUTOMATICA DOS VALORES DIGITADOS.
			printf("\nInformar valor em decimal para conversao: ");
			scanf_s("%d", &valor);
			printf("\n%d em Hexadecimal e: %x \n\n", valor, valor);
		}
		else if (opcao == 2)
		{
			// UTILIZA OS CODIGOS %x E %d PARA FAZER A CONVERSÃO AUTOMATICA DOS VALORES DIGITADOS.
			printf("\nInformar valor em Hexadecimal para conversao: ");
			scanf_s("%x", &valor);
			printf("\n%x em Decimal e: %d \n\n", valor, valor);
		}
		else if (opcao == 0)
		{
			// ENCERRA O PROGRAMA.
			printf("Programa finalizado!");
			continuar = 0;
		}
		else
			printf("valor invalido!");
	}
}

